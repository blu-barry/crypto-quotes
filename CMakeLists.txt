cmake_minimum_required (VERSION 3.21.3)

project(crypto-quotes CXX)
set(CMAKE_CXX_STANDARD 20)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(CryptoQuotes src/main.cpp)
target_link_libraries(CryptoQuotes ${CONAN_LIBS})

add_subdirectory(src/exchanges)
add_subdirectory(src/exchanges/coinbase)
add_subdirectory(src/exchanges/ftx)
add_subdirectory(src/exchanges/nbx)
