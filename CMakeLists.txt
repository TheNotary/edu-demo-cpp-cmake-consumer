cmake_minimum_required(VERSION 3.10)
project(DemoConsumer)

set(CMAKE_CXX_STANDARD 17)

enable_testing ()

include_directories (${PROJECT_BINARY_DIR}/ext/include)
link_directories (${PROJECT_BINARY_DIR}/ext/lib)

add_subdirectory (ext)
add_subdirectory (src)
add_subdirectory (test)
