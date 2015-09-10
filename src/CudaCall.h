#pragma once

#include <cuda.h>
#include <nvrtc.h>

static void call(cudaError_t error) {
	if (error != cudaSuccess) {
		std::cerr << "Cuda Error: " << error << " - " << cudaGetErrorString(error) << "\n";
	}
}

static void call(nvrtcResult result) {
	if (result != NVRTC_SUCCESS) {
		std::cerr << "\nerror: " << result << " failed with error "
			<< nvrtcGetErrorString(result) << '\n';
	}
}

static void call(CUresult result) {
	if (result != CUDA_SUCCESS) {
		const char *msg;
		cuGetErrorName(result, &msg);
		std::cerr << "\nerror: " << result << " failed with error "
			<< msg << '\n';
	}
}
