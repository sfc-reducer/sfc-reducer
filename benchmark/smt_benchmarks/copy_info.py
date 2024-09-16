import os
import shutil
import glob

# Source and destination base directories
src_base_dir = 'benchmarks'
dst_base_dir = '../smt_results/perses_0'

# Find all file.txt in subdirectories of the source directory
dst_files = glob.glob(os.path.join(dst_base_dir, '*'))

for dst_file in dst_files:
    # Construct the corresponding destination directory and file path
    sub_dir = os.path.basename(dst_file)
    src_dir = os.path.join(src_base_dir, sub_dir)
    src_file = os.path.join(src_dir, 'info.properties')
                                
    # Create the destination directory if it doesn't exist
    # os.makedirs(dst_dir, exist_ok=True)
    
    # Copy the file from the source to the destination
    shutil.copy2(src_file, dst_file)
    
    print(f"Copied {src_file} to {dst_file}")

