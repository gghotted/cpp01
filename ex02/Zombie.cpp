#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name) {
  this->type = type;
  this->name = name;
  this->printPrefix();
  std::cout << "I was born ^^\n";
}

Zombie::~Zombie(void) {
  this->printPrefix();
  std::cout << "I am dying.. bye..\n";
}

void Zombie::announce(void) {
  this->printPrefix();
  std::cout << "I am " + this->name + "!!\n";
}

void Zombie::printPrefix(void) {
  std::cout << std::setw(10) << this->name;
  std::cout << std::setw(13) << "(" + this->type + "): ";
}
