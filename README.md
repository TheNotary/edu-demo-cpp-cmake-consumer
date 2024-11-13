# CMake Consumer/ Dependency Demo

This repo is holds the consumer of the sister-demo repo, https://github.com/TheNotary/edu-demo-cpp-cmake-dependency.git

This demo show off CMakes ability to automate the download and build of dependencies.

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

