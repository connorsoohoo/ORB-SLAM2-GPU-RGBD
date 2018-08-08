#pragma once
#ifndef __MATNORM_HPP__
#define __MATNORM_HPP__

#include <vector>
#include <opencv2/core/cuda.hpp>
#include <cuda_runtime.h>
#include <cuda/Cuda.hpp>

namespace ORB_SLAM2 { namespace cuda {
  using namespace std;
  using namespace cv;
  using namespace cv::cuda;

  class MatNormGPU {
    //GpuMat gMat;
    uint8_t subtract_val;

  public:
    MatNormGPU();
    ~MatNormGPU();

    void MatNormGPU::setSubtractValue(cv::cuda::GpuMat _img, int w);
    void MatNormGPU::subtract_pixel_from_mat (cv::cuda::GpuMat _img);
  };
} }
#endif