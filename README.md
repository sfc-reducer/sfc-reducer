# Artifact for "Boosting Program Reduction with the Missing Piece of Syntax-Guided Transformations"

## How to Get the Evaluation Results from the Raw Data
### Minimization Experiments
Run ```cd benchmark```. Then run the following commands to get the results in csv format.
#### C & Rust results:
- Perses
    ```./convert_result_to_csv.py -d c_rust_results/perses_0/*```

- Vulcan
    ```./convert_result_to_csv.py -d c_rust_results/vulcan_0/*```

- SFC_Perses
    ```
    For C
    ./convert_result_to_csv.py -d c_rust_results/proteus_0/*
    For Rust
    ./convert_result_to_csv.py -d c_rust_results/proteus_after_perses/proteus_0/*
    ```

- SFC_Vulcan
    ```./convert_result_to_csv.py -d c_rust_results/proteus_after_vulcan/proteus_0/*```

- SFC_Perses--ie
    ```./convert_result_to_csv.py -d c_rust_results/proteus_after_perses/proteus_ss_0/*```

- SFC_Perses--ssr
    ```./convert_result_to_csv.py -d c_rust_results/proteus_after_perses/proteus_id_0/*```

- SFC_Vulcan--ie
    ```./convert_result_to_csv.py -d c_rust_results/proteus_after_vulcan/proteus_ss_0/*```

- SFC_Vulcan--ssr
    ```./convert_result_to_csv.py -d c_rust_results/proteus_after_vulcan/proteus_id_0/*```

#### SMT results:
- Perses
    ```./convert_result_to_csv.py -d smt_results/perses_0/* > smt_results/perses_results.csv```

- Vulcan
    ```./convert_result_to_csv.py -d smt_results/vulcan_0/* > smt_results/vulcan_results```

- SFC_Perses
    ```./convert_result_to_csv.py -d smt_results/proteus_after_perses/proteus_0/* > smt_results/proj_after_perses_results.csv```

- SFC_Vulcan
    ```./convert_result_to_csv.py -d smt_results/proteus_after_vulcan/proteus_0/* > smt_results/proj_after_vulcan_results.csv```

- SFC_Perses--ie
    ```./convert_result_to_csv.py -d smt_results/proteus_after_perses/proteus_ss_0/* > smt_results/proj_ss_results.csv```

- SFC_Perses--ssr
    ```./convert_result_to_csv.py -d smt_results/proteus_after_perses/proteus_id_0/* > smt_results/proj_id_results.csv```

- SFC_Vulcan--ie
    ```./convert_result_to_csv.py -d smt_results/proteus_after_vulcan/proteus_ss_0/* > smt_results/proj_vulcan_ss_results.csv```

- SFC_Vulcan--ssr
    ```./convert_result_to_csv.py -d smt_results/proteus_after_vulcan/proteus_id_0/* > smt_results/proj_vulcan_id_results.csv```

- Plot
    ```
    cd smt_results
    python3 plot_results.py
    ```

### Canonicalization Experiments
Run the following commands in the folder ```tamer-dataset```
#### Crash results:
- Perses
    ```./analyze_results.py -d ../canonicalization_results/crash/trec_perses_0```

- SFC_Perses
    ```./analyze_results.py -d ../canonicalization_results/crash/trec_proteus_0```

- SFC_Perses--sc
    ```./analyze_results.py -d ../canonicalization_results/crash/trec_proteus_nocano_0```

- Vulcan
    ```
    ./analyze_results.py -d ../canonicalization_results/crash/vulcan_0
    ./analyze_results.py -d ../canonicalization_results/crash/trec_after_vulcan/trec_perses_0
    ```

- SFC_Vulcan
    ```./analyze_results.py -d ../canonicalization_results/crash/trec_proteus_vulcan_0/```

- SFC_Vulcan--sc
    ```./analyze_results.py -d ../canonicalization_results/crash/trec_proteus_vulcan_nocano_0```

#### Miscompilation results:
- Perses
    ```./analyze_results.py -d ../canonicalization_results/wrongcode/trec_perses_0```

- SFC_Perses
    ```
    ./analyze_results.py -d ../canonicalization_results/wrongcode/trec_proteus_nocano_0
    ./analyze_results.py -d ../canonicalization_results/wrongcode/cano_after_trec_proteus_nocano/proteus_cano_0
    ```

- SFC_Perses--sc
    ```./analyze_results.py -d ../canonicalization_results/wrongcode/trec_proteus_nocano_0```

- Vulcan
    ```
    ./analyze_results.py -d ../canonicalization_results/wrongcode/vulcan_0
    ./analyze_results.py -d ../canonicalization_results/wrongcode/trec_after_vulcan/trec_perses_0
    ```

- SFC_Vulcan
    ```
    ./analyze_results.py -d ../canonicalization_results/wrongcode/vulcan_0
    ./analyze_results.py -d ../canonicalization_results/wrongcode/proteus_nocano_after_vulcan/proteus_no_cano_0/
    ./analyze_results.py -d ../canonicalization_results/wrongcode/trec_after_proteus_nocano_after_vulcan/trec_perses_0
    ./analyze_results.py -d ../canonicalization_results/wrongcode/cano_after_trec_after_proteus_nocano_after_vulcan/proteus_cano_0/
    ```

- SFC_Vulcan--sc
    ```
    ./analyze_results.py -d ../canonicalization_results/wrongcode/vulcan_0
    ./analyze_results.py -d ../canonicalization_results/wrongcode/proteus_nocano_after_vulcan/proteus_no_cano_0/
    ./analyze_results.py -d ../canonicalization_results/wrongcode/trec_after_proteus_nocano_after_vulcan/trec_perses_0
    ```

## How to Run the Minimization Experiments to Get the Raw Data
Note: We do not include Bench-cano in this artifact as it is not released by its authors
### 1. Build the docker image
- If docker is not installed, install it by following the [instructions](https://docs.docker.com/get-docker/).
- Build the image by running ```docker build . -t <image_name>```. This might take a long time because the image is based on the docker image for T-Rec which is over 100GB.
- Run a container from the image:
   ```docker container run --cap-add SYS_PTRACE --interactive --tty <image_name>```

### 2. Run Each Reducer on Bench-reduce
Note: proteus is the original name of our prototype. In the paper, It is renamed to SFC.
First run ```cd /tmp/benchmark```, then run the following command to launch the experiment:
```./run_exp_parallel.py -s <benchmarks> -r <reducer> -o <output_dir> -j <number_of_cpus>```
- Run Perses:
    ```
    ./run_exp_parallel.py -s c_benchmarks/* rust_benchmarks/* -r perses -o c_rust_results -j <number_of_cpus>
    ./run_exp_parallel.py -s smt_benchmarks/benchmarks/* -r perses -o smt_results -j <number_of_cpus>
    ```
- Run Vulcan:
    ```
    ./run_exp_parallel.py -s c_benchmarks/* rust_benchmarks/* -r perses -o c_rust_results -j <number_of_cpus>
    ./run_exp_parallel.py -s smt_benchmarks/benchmarks/* -r perses -o smt_results -j <number_of_cpus>
    ```
- Run SFC_Perses
    ```
    ./run_exp_parallel.py -s c_rust_results/perses_0/* -r proteus -o c_rust_results/proteus_after_perses -j <number_of_cpus>
    ./run_exp_parallel.py -s smt_results/perses_0/* -r proteus -o smt_results/proteus_after_perses -j <number_of_cpus>
    ```
- Run SFC_Perses--ssr
    ```
    ./run_exp_parallel.py -s c_rust_results/perses_0/* -r proteus_id -o c_rust_results/proteus_after_perses -j <number_of_cpus>
    ./run_exp_parallel.py -s smt_results/perses_0/* -r proteus_id -o smt_results/proteus_after_perses -j <number_of_cpus>
    ```
- Run SFC_Perses--ie
    ```
    ./run_exp_parallel.py -s c_rust_results/perses_0/* -r proteus_ss -o c_rust_results/proteus_after_perses -j <number_of_cpus>
    ./run_exp_parallel.py -s smt_results/perses_0/* -r proteus_ss -o smt_results/proteus_after_perses -j <number_of_cpus>
    ```
- Run SFC_Vulcan
    ```
    ./run_exp_parallel.py -s c_rust_results/vulcan_0/* -r proteus -o c_rust_results/proteus_after_vulcan -j <number_of_cpus>
    ./run_exp_parallel.py -s smt_results/vulcan_0/* -r proteus -o smt_results/proteus_after_vulcan -j <number_of_cpus>
    ```
- Run SFC_Vulcan--ssr
    ```
    ./run_exp_parallel.py -s c_rust_results/vulcan_0/* -r proteus_id -o c_rust_results/proteus_after_vulcan -j <number_of_cpus>
    ./run_exp_parallel.py -s smt_results/vulcan_0/* -r proteus_id -o smt_results/proteus_after_vulcan -j <number_of_cpus>
    ```
- Run SFC_Vulcan--ie
    ```
    ./run_exp_parallel.py -s c_rust_results/vulcan_0/* -r proteus_ss -o c_rust_results/proteus_after_vulcan -j <number_of_cpus>
    ./run_exp_parallel.py -s smt_results/vulcan_0/* -r proteus_ss -o smt_results/proteus_after_vulcan -j <number_of_cpus>
    ```