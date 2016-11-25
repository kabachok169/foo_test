cmake_minimum_required(VERSION 2.6) 
project(foo)

include_directories(include)

set(SOURCE_EXE examples/main_f.cpp)

set(SOURCE_LIB sources/foo.cpp)

set(SOURCE_TEST test/init.cpp)

add_library(lib STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

add_executable(test ${SOURCE_TEST})

target_link_libraries(main lib)
