include(${CMAKE_SCRIPTS_DIR}/install_gtest.cmake)

add_executable(AddTest add_test.cpp)
target_include_directories(AddTest PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(AddTest PRIVATE Add)
enable_gtest(AddTest)

add_executable(SampleTe erase-it_test.cpp)
set_normal_compile_options(SampleTe)
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/include)
enable_gtest(SampleTe)