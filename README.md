# CMake Consumer/ Dependency Demo

This repo demonstrates how to use CMake to fetch and build a dependency from github.  The dependency built can be found [here](https://github.com/TheNotary/edu-demo-cpp-cmake-dependency.git)


#### OS Deps

```
brew install cmake
```


#### Build

```
cd build
cmake ..
make -j 8

./src/main
```


#### Run Tests

```
cd build
# Compiles with some memcheck features enabled
cmake -DCMAKE_CXX_FLAGS="-fsanitize=address" -DCMAKE_C_FLAGS="-fsanitize=address" ..
make
ctest
```


#### Refs

- cmake template https://github.com/ggarber/cmake-bootstrap/tree/master

