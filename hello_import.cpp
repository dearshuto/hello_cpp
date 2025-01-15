import my_module;
#include <iostream>

int main() {
  std::cout << my_module::hello_world() << std::endl;
  std::cout << "3 + 4 = " << my_module::add(3, 4) << std::endl;
}
