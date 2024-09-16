import os
import matplotlib.pyplot as plt
import statistics
import numpy as np
import scipy

def read_results(file_path, benchmark_names):
    times = []
    sizes = []
    with open (file_path, 'r') as f:
        lines = f.readlines()
        for line in lines:
            parts = line.strip().split(',')
            name = parts[0]
            time = int(parts[2])
            size = int(parts[3])
            if (size == 0 or name not in benchmark_names):
                continue
            times.append(time)
            sizes.append(size)

    return sizes, times

def get_benchmarks_info(file_path):
    benchmark_names = []
    with open (file_path, 'r') as f:
        lines = f.readlines()
        for line in lines:
            parts = line.strip().split(',')
            benchmark_names.append(parts[0])
    return benchmark_names


def main():
    plt.rcParams["font.size"] = 16.0
    plt.rcParams["font.family"] = "Times New Roman"
    plt.rcParams['pdf.fonttype'] = 42
    plt.rcParams['ps.fonttype'] = 42
    plt.rcParams["figure.figsize"] = (6,3)
    # benchmark_names = get_benchmarks_info("proj_vulcan_results.csv")
    benchmark_names = get_benchmarks_info("proj_after_perses_results.csv")
    perses_sizes, perses_times = read_results("perses_results.csv", benchmark_names)
    vulcan_sizes, vulcan_times = read_results("vulcan_results.csv", benchmark_names)

    proj_sizes, proj_times = read_results("proj_after_perses_results.csv", benchmark_names)
    proj_times = [x + y for x, y in zip(proj_times, perses_times)]

    proj_vulcan_sizes, proj_vulcan_times = read_results("proj_after_vulcan_results.csv", benchmark_names)
    proj_vulcan_times = [x + y for x, y in zip(proj_vulcan_times, vulcan_times)]

    proj_id_sizes, proj_id_times = read_results("proj_id_results.csv", benchmark_names)
    proj_ss_sizes, proj_ss_times = read_results("proj_ss_results.csv", benchmark_names)

    proj_vulcan_id_sizes, proj_id_times = read_results("proj_vulcan_id_results.csv", benchmark_names)
    proj_vulcan_ss_sizes, proj_ss_times = read_results("proj_vulcan_ss_results.csv", benchmark_names)

    print(len(perses_sizes), len(vulcan_sizes), len(proj_sizes), len(proj_vulcan_sizes),\
          len(proj_id_sizes), len(proj_ss_sizes), len(proj_vulcan_id_sizes), len(proj_vulcan_ss_sizes))

    print("Minimization results:")
    time_wrt_perses = list(map(lambda x, y: y/x, perses_times, proj_times))
    time_wrt_vulcan = list(map(lambda x, y: y/x, vulcan_times, proj_vulcan_times))

    print("time wrt perses: ", statistics.mean(time_wrt_perses))
    print("time wrt vulcan: ", statistics.mean(time_wrt_vulcan))

    improve_wrt_perses = list(map(lambda x, y: (y-x)/x, perses_sizes, proj_sizes))
    improve_wrt_vulcan = list(map(lambda x, y: (y-x)/x, vulcan_sizes, proj_vulcan_sizes))

    print("Perses SFC average size: ", statistics.mean(proj_sizes))
    print("Vulcan SFC average size: ", statistics.mean(proj_vulcan_sizes))

    print("Perses improvement: ", statistics.mean(improve_wrt_perses))
    print("Max Perses improvement: ", min(improve_wrt_perses))
    print("improve count wrt perses: ", sum(x < 0 for x in improve_wrt_perses))
    print("worse count wrt perses: ", sum(x > 0 for x in improve_wrt_perses))
    print("Vulcan improvement: ", statistics.mean(improve_wrt_vulcan))
    print("Max Vulcan improvement: ", min(improve_wrt_vulcan))
    print("improve count wrt vulcan: ", sum(x < 0 for x in improve_wrt_vulcan))
    print("worse count wrt vulcan: ", sum(x > 0 for x in improve_wrt_vulcan))

    print("Ablation results:")
    print("only id:")
    gap_wrt_perses_sfc = list(map(lambda x, y: (y-x)/x, proj_sizes, proj_id_sizes))
    gap_wrt_vulcan_sfc = list(map(lambda x, y: (y-x)/x, proj_vulcan_sizes, proj_vulcan_id_sizes))

    print("Perses id average size: ", statistics.mean(proj_id_sizes))
    print("Vulcan id average size: ", statistics.mean(proj_vulcan_id_sizes))

    print("gap wrt perses sfc: ", statistics.mean(gap_wrt_perses_sfc))
    print("gap wrt vulcan sfc: ", statistics.mean(gap_wrt_vulcan_sfc))
    print("worse count wrt perses sfc: ", sum(x > 0 for x in gap_wrt_perses_sfc))
    print("worse count wrt vulcan sfc: ", sum(x > 0 for x in gap_wrt_vulcan_sfc))

    print("only ss:")
    gap_wrt_perses_sfc = list(map(lambda x, y: (y-x)/x, proj_sizes, proj_ss_sizes))
    gap_wrt_vulcan_sfc = list(map(lambda x, y: (y-x)/x, proj_vulcan_sizes, proj_vulcan_ss_sizes))

    print("Perses ss average size: ", statistics.mean(proj_ss_sizes))
    print("Vulcan ss average size: ", statistics.mean(proj_vulcan_ss_sizes))

    print("gap wrt perses sfc: ", statistics.mean(gap_wrt_perses_sfc))
    print("gap wrt vulcan sfc: ", statistics.mean(gap_wrt_vulcan_sfc))
    print("worse count wrt perses sfc: ", sum(x > 0 for x in gap_wrt_perses_sfc))
    print("worse count wrt vulcan sfc: ", sum(x > 0 for x in gap_wrt_vulcan_sfc))

    # create a figure and axis object

    data = [perses_sizes, vulcan_sizes, proj_sizes, proj_vulcan_sizes]
    means = list(map(statistics.mean, data))
    stdevs = list(map(statistics.stdev, data))
    plt.ylabel('Size (#)')
    bp = plt.boxplot(data, labels=['Perses', 'Vulcan', r'Perses$_{SFC}$', r'Vulcan$_{SFC}$'], showfliers=False, widths = 0.4)
    for i, d in enumerate(data):
        y = d
        x = np.random.normal(i+1, 0.06, len(y))
        plt.scatter(x, y, s=5)

    for i in range(len(means)):
        x, y = bp['caps'][i*2+1].get_xydata()[1]
        text = r' $\mu$'+'={:.2f}\n'.format(means[i])+r' $\sigma$'+'={:.2f}'.format(stdevs[i])
        if i < 1:
            plt.annotate(text, xy=(x+0.1, y-100), fontsize=12)
        else:
            plt.annotate(text, xy=(x-0.4, y+220), fontsize=12)

    plt.tight_layout()
    plt.savefig("../../figures/smt-size.pdf")
    plt.show()

    data = [perses_sizes, proj_sizes, proj_id_sizes, proj_ss_sizes]
    means = list(map(statistics.mean, data))
    stdevs = list(map(statistics.stdev, data))
    plt.ylabel('Size (#)')
    bp = plt.boxplot(data, labels=['Perses', 'Proteus', r'Proteus$_{noSS}$', r'Proteus$_{noIE}$'], showfliers=False, widths = 0.4)
    for i, d in enumerate(data):
        y = d
        x = np.random.normal(i+1, 0.06, len(y))
        plt.scatter(x, y, s=5)

    for i in range(len(means)):
        x, y = bp['caps'][i*2+1].get_xydata()[1]
        text = r' $\mu$'+'={:.2f}\n'.format(means[i])+r' $\sigma$'+'={:.2f}'.format(stdevs[i])
        if i < 1:
            plt.annotate(text, xy=(x+0.1, y-100), fontsize=12)
        else:
            plt.annotate(text, xy=(x-0.4, y+220), fontsize=12)

    plt.tight_layout()
    # plt.savefig("../../figures/smt-ablation.pdf")
    plt.show()


    data = [perses_times, vulcan_times, proj_times, proj_vulcan_times]
    means = list(map(statistics.mean, data))
    stdevs = list(map(statistics.stdev, data))
    plt.ylabel('Time (s)')
    bp = plt.boxplot(data, labels=['Perses', 'Vulcan', r'Perses$_{SFC}$', r'Vulcan$_{SFC}$'
], showfliers=False, widths = 0.4)
    for i, d in enumerate(data):
        y = d
        x = np.random.normal(i+1, 0.06, len(y))
        plt.scatter(x, y, s=5)

    for i in range(len(means)):
        x, y = bp['caps'][i*2+1].get_xydata()[1]
        text = r' $\mu$'+'={:.2f}\n'.format(means[i])+r' $\sigma$'+'={:.2f}'.format(stdevs[i])
        plt.annotate(text, xy=(x-0.4, y+2000), fontsize=12)

    plt.tight_layout()
    plt.savefig("../../figures/smt-time.pdf")
    plt.show()

if __name__ == '__main__':
    main()