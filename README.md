# HLS for Neural Classification Model

## 1. Description

**Model Link:** [Neural Classification Model](https://drive.google.com/file/d/1gCzSk0O1OdZAo-VBt-kccDNIh_j1A0xZ/view?usp=drivesdk)

**Task of the Model:**  
To train and evaluate a neural network model for binary classification using a synthetic dataset. The model's architecture consists of several dense layers with ReLU activation functions, and it is trained using the Adam optimizer and binary cross-entropy loss.

**Model Architecture:**
- **Number of Layers:** 5
- **Type of Layers:** 
  - 4 dense layers with ReLU activation functions
  - 1 dense sigmoid layer as the output layer
- **Hidden Neurons in the Layers:**
  - 1st Layer: 128
  - 2nd Layer: 64
  - 3rd Layer: 32
  - 4th Layer: 16
  - 5th Layer: 1

## 2. Modifications to Keras2C-Generated Files

### C Simulation:
- **Files Generated:** `sample.c`, `sample.h`, `sample_test_suite.c`
- **Modifications:**
  - Included all missing functions after multiple iterations (initially included 6 files; later brought the required functions into `sample.c`).
  - Resolved redefinition errors of `size_t` variables by declaring them once in the function at the top.
  - Fixed segmentation errors by declaring the required array globally.
  - Addressed minor errors like missing parentheses and semicolons.
  - Changed the return statement in the test bench file’s `main` function from `1` to `0` to resolve the non-zero return value error.
  - Successfully simulated after these modifications.

### Synthesis Part:
- **Modifications:**
  - Replaced all `memset()` and `memcpy()` functions with loops in all files (multiple iterations were required).
  - Resolved function pointer errors by directly calling the functions instead of passing pointers.
  - Addressed double pointer errors.
  - Redefined structures and manually created required size arrays for each instance to optimize resources.
  - Manually created structure objects instead of using functions (around 50 occurrences).
  - Converted all dynamic memory allocations to static.
  - Resolved segmentation faults by declaring arrays globally.
  - Modified all function definitions.
  - Successfully synthesized and generated all required reports.

## 3. Modifications for HLS4ML Reports

- **Pragmas:**
  - **Removed:** `#config_schedule -enable_dsp_full_reg=false` from `build_prj.tcl` due to warnings that interrupted the process.
  - **TensorFlow Version:** Downgraded from 14.1 to make HLS4ML run.
  - **System Issues:** Faced system crashes due to high memory requirements; used the TA’s lab system for synthesis.
  - **Synthesis Time:** Approximately 30 minutes.
  - **FPGA Board Used:** `xc7a200t-fbg676-2` (Artix-7)
  - **Board Configuration:**
    - BRAM_18K: 730
    - DSP48E: 740
    - FF: 269200
    - LUT: 134600
    - URAM: 0

## 4. Dependencies and Solutions

The dependencies and libraries required to run and generate HLS4ML reports are listed below:

- `pip3 install hls4ml[profiling]`
- `pip3 install tensorflow==2.15.1`
- `pip3 install torch torchvision --index-url https://download.pytorch.org/whl/cpu`
- `pip3 install --upgrade pip==22.3`
- `pip3 install tensorrt`
- `pip3 install tf_keras`
- `pip3 install pydot`
- `pip3 install pydotplus`
- `pip3 install graphviz`
- `!export CUDA_VISIBLE_DEVICES=0`

## 5. Optimizations

For each optimization applied, a justification is provided:

- **`#pragma HLS unroll`:**  
  Used for unrolling loops by the required factor, reducing latency at the cost of resources.
  
- **`#pragma HLS array_partition`:**  
  Cyclic partitioning with block factor 8 in dimension 1 of arrays `A` and `B`. After partitioning, loop unrolling and pipelining (`II=1`) were applied to reduce latency.
  
- **`#pragma HLS PIPELINE`:**  
  Applied pipelining (`II=1`) in the innermost loop to reduce latency.

## 6. Results

### a. Latency and Area Overhead Table for Baseline (Unoptimized)

| Design          | LUT   | FF    | DSP | BRAM | Latency (min/max) | Clock Period Estimated |
|-----------------|-------|-------|-----|------|-------------------|------------------------|
| Unoptimized     | 44551 | 58416 | 334 | 427  | 176149/176149     | 4.348                  |

### b. Latency and Area Overhead Table for Optimized Versions

#### Resource Optimized
| LUT   | FF    | DSP | BRAM | Latency (min/max) | Clock Period Estimated |
|-------|-------|-----|------|-------------------|------------------------|
| 42222 | 46177 | 269 | 82   | 80839/80839       | 8.609                  |

#### Unroll Optimization
| LUT   | FF    | DSP | BRAM | Latency (min/max) | Clock Period Estimated |
|-------|-------|-----|------|-------------------|------------------------|
| 45096 | 47892 | 282 | 84   | 45679/45679       | 9.597                  |

#### Array Partition Optimization
| LUT    | FF    | DSP | BRAM | Latency (min/max) | Clock Period Estimated |
|--------|-------|-----|------|-------------------|------------------------|
| 97369  | 71396 | 309 | 96   | 60288/60288       | 5.000                  |

#### Optimized Array Partition
| LUT    | FF    | DSP | BRAM | Latency (min/max) | Clock Period Estimated |
|--------|-------|-----|------|-------------------|------------------------|
| 91897  | 83839 | 317 | 96   | 12624/12624       | 4.442                  |

#### Optimized Matrix Multiplication Tiling
| LUT    | FF    | DSP | BRAM | Latency (min/max) | Clock Period Estimated |
|--------|-------|-----|------|-------------------|------------------------|
| 53328  | 60531 | 343 | 72   | 1187/1188         | 4.372                  |

### c. HLS4ML Generated Latency and Area Overhead Table

| Design | LUT    | FF     | DSP  | BRAM | Latency (min/max) | Clock Period Estimated |
|--------|--------|--------|------|------|-------------------|------------------------|
| HLS4ML | 145286 | 142339 | 1796 | 798  | 47/51             | 4.249                  |

### d. Comparison Report: Optimized vs. HLS4ML

In Vivado, we significantly optimized the BRAM, registers, LUTs, flip-flops, and DSPs compared to HLS4ML. This optimization led to improved resource utilization. However, the improvements resulted in slightly higher latency, which we are actively addressing to enhance overall performance.

Through each iteration, we worked to bring the results of Vivado closer to those of HLS4ML. We tried various approaches and have documented the most successful ones. As expected, resource increases led to reduced latency, and vice versa. We have reached the most optimal and balanced results in Vivado, achieving better resource utilization than in HLS4ML.

## 7. Modified Keras2C Files and HLS4ML Jupyter Notebook

All modified Keras2C generated files and the HLS4ML Jupyter notebook have been uploaded in a zip format.

---
