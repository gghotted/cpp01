#include "ZombieEvent.hpp"

std::string ZombieEvent::type = "default";

void ZombieEvent::setZombieType(std::string _type) {
  type = _type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
  return (new Zombie(type, name));
}

Zombie ZombieEvent::randomChump(void) {
  Zombie zombie(type, generateRandomName());
  zombie.announce();
  return zombie;
}

std::string ZombieEvent::generateRandomName(void) {
  static const std::string names[] = {"Canon", "Warrior", "Wizard"};
  int index = std::rand() % 3;
  return names[index];
}
