#include <iostream>
#include <stdexcept>
#include "ReplaceMachine.hpp"

int main(int argc, char **argv) {
  ReplaceMachine machine;
  try {
    if (argc != 4)
      throw std::invalid_argument("invalid number of arguments");
    new(&machine) ReplaceMachine(argv[1], argv[2], argv[3]);
  } catch (std::invalid_argument& e) {
    std::cout << e.what() << std::endl;
    return 1;
  }
  machine.replace();
  if (machine.save() == -1)
    std::cout << "save failed: " << strerror(errno) << '\n';
  return 0;
}
