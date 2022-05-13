cmake_minimum_required (VERSION 3.21.3)

project(crypto-quotes CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "-Wall -Werror -Wfatal-errors -Wpedantic -Wextra -Wmissing-include-dirs -Wconversion -Wsign-conversion -pthread")
add_compile_options(-Wall -Werror -Wfatal-errors -Wpedantic -Wextra -Wmissing-include-dirs -Wconversion -Wsign-conversion -pthread)


include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(CryptoQuotes src/main.cpp)
target_link_libraries(CryptoQuotes ${CONAN_LIBS})

include_directories(src)
include_directories(SYSTEM src/external)
