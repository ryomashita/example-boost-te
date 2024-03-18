add_library(Add add.cpp)
set_normal_compile_options(Add)

add_library(SampleTe erase-it.cpp)
set_normal_compile_options(SampleTe)
include_directories(${CMAKE_SOURCE_DIR}/include)