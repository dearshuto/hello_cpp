#include <concepts>
#include <cstdlib>
#include <iostream>

struct PressureKernel {
  float operator()([[maybe_unused]] float value) { return 7.2; }
};

struct Kernel {};

PressureKernel get_pressure_kernel(Kernel kernel) { return PressureKernel{}; }

template <typename T>
concept PressureKernelLike = requires(T functor, float value) {
  { functor(value) } -> std::same_as<float>;
};

template <typename T>
concept KernelLike = requires(T value) {
  { get_pressure_kernel(value) } -> PressureKernelLike;
};

float function(KernelLike auto kernel) {
  auto pressure_kernel = get_pressure_kernel(kernel);
  return pressure_kernel(1.0f);
}

int main() {
  std::cout << function(Kernel{}) << std::endl;
  return EXIT_SUCCESS;
}
