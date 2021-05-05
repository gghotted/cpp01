#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
  std::srand(time(0));
}

ZombieEvent::~ZombieEvent(void) {}

void ZombieEvent::setZombieType(std::string type) {
  this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
  return (new Zombie(this->type, name));
}

Zombie ZombieEvent::randomChump(void) {
  Zombie zombie(this->type, ZombieEvent::generateRandomName());
  zombie.announce();
  return zombie;
}

std::string ZombieEvent::generateRandomName(void) {
  static const std::string names[] = {"Canon", "Warrior", "Wizard"};
  int index = std::rand() % 3;
  return names[index];
}
