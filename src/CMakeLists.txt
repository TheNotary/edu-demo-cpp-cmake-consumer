file (GLOB_RECURSE SRCS . *.cpp)

add_library(${PROJECT_NAME}
    ${SRCS}
)

add_dependencies(${PROJECT_NAME}
    ${EXTERNAL_PROJECTS}
    ${EXTERNAL_TEST_PROJECTS}
)

add_executable(main
    ${SRCS}
)

# Link the $PROJECT_NAME to the main executable, along with any additional
# external libraries declared in ext/
target_link_libraries(main
   # Add libraries here
   ${PROJECT_NAME}
   ${EXTERNAL_LIBRARIES}
)

# Recursively link all EXTERNAL_PROJECTS' static libraries identified in ext/
foreach(project ${EXTERNAL_PROJECTS})
    # Construct the path to the static library or shared library
    target_link_libraries(main
        ${CMAKE_BINARY_DIR}/ext/lib/lib${project}.a  # Adjust the extension if needed (e.g., .so, .lib)
    )
endforeach()

target_include_directories(main
    PRIVATE
    ${CMAKE_BINARY_DIR}/ext/include
)
