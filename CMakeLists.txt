cmake_minimum_required(VERSION 3.10)
project(DemoConsumer)

set(CMAKE_CXX_STANDARD 17)

enable_testing ()

include_directories (${PROJECT_BINARY_DIR}/ext/include)
link_directories (${PROJECT_BINARY_DIR}/ext/lib)

add_subdirectory (ext)
add_subdirectory (src)
add_subdirectory (test)

add_custom_target (cpplint
  COMMAND find src test \\\( -iname "*.cpp" -o -iname "*.hpp" \\\) ! -iname "*cmake*" | xargs cpplint --linelength=120
  WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
  COMMENT "Running cpplint")

add_custom_target (cppcheck
  COMMAND cppcheck src test
  WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
  COMMENT "Running cppcheck")

add_custom_target (hfcca
  COMMAND hfcca -w src test
  WORKING_DIRECTORY ${PROJECT_SOURCE_DIR}
  COMMENT "Running hfcca")

add_custom_target (review
  DEPENDS cppcheck cpplint hfcca
  COMMENT "Running all checks")
