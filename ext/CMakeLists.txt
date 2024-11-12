include (ExternalProject)

# set (EXTERNAL_LIBRARIES some_library PARENT_SCOPE)
set (EXTERNAL_PROJECTS my_dep_project PARENT_SCOPE)

set (EXTERNAL_TEST_LIBRARIES gtest PARENT_SCOPE)
set (EXTERNAL_TEST_PROJECTS gtest_project PARENT_SCOPE)

externalproject_add (gtest_project
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.11.0
  UPDATE_COMMAND ""
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${CMAKE_BINARY_DIR}/ext -Dgtest_disable_pthreads=ON
)

ExternalProject_Add(my_dep_project
  GIT_REPOSITORY    https://github.com/TheNotary/edu-demo-cpp-cmake-dependency.git
  GIT_TAG           origin/main
  # GIT_TAG           v1.0.5
  INSTALL_DIR ${CMAKE_BINARY_DIR}/ext
  CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=<INSTALL_DIR>
)
