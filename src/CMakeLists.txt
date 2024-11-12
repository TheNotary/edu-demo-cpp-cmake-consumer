file (GLOB_RECURSE SRCS . *.cpp)

add_library(${PROJECT_NAME}
    ${SRCS}
)

add_dependencies(${PROJECT_NAME}
    ${EXTERNAL_PROJECTS}
    ${EXTERNAL_TEST_PROJECTS})

add_executable(main
    main.cpp
)

target_link_libraries(main
   # Add libraries here
   ${PROJECT_NAME}
   ${EXTERNAL_LIBRARIES}
)

target_include_directories(main
    PRIVATE
    ${CMAKE_BINARY_DIR}/ext/include
)

target_link_libraries(main ${CMAKE_BINARY_DIR}/ext/lib/libmy_dep.a)
