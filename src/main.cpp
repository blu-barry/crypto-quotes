#include <asio.hpp>
#include <iostream>

using namespace std;

void print(const asio::error_code& /*e*/) {
  std::cout << "Hello, world" << std::endl;
}

int main(int argc, const char * argv[]) {
  std::cout << "Hello, world" << std::endl;
  return 0;
}
