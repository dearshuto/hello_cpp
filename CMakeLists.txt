cmake_minimum_required(VERSION 3.28)
project(hello_cpp)

add_executable(hello_world  hello_world.cpp)
target_compile_features(hello_world PUBLIC cxx_std_23)

add_executable(hello_generator hello_generator.cpp)
target_compile_features(hello_generator PUBLIC cxx_std_23)
