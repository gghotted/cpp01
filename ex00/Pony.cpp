#include "Pony.hpp"

Pony::Pony(const char *name) {
  this->name = name;
  std::cout << name << ": Pony object is created\n";
}

Pony::~Pony(void) {
  std::cout << this->name << ": Pony object is destroyed\n";
}
