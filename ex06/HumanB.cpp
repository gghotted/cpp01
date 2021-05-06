#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
  this->name = name;
  this->weapon = NULL;
}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon& weapon) {
  this->weapon = &weapon;
}

void HumanB::attack(void) {
  if (!this->weapon)
    std::cout << this->name << " has no weapon\n";
  else
    std::cout << this->name << " attack with his " <<
                 this->weapon->getType() << '\n';
}
