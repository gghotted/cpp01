#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
  std::cout << "ZombieHorde is creating!\n";
  this->size = n;
  this->zombies = new Zombie[n];
  for (int i = 0; i < n; i++)
    new(&this->zombies[i]) Zombie("horde", this->generateRandomName());
}

ZombieHorde::~ZombieHorde(void) {
  std::cout << "ZombieHorde is destroying!\n";
  delete[] this->zombies;
}

std::string ZombieHorde::generateRandomName(void) {
  static const std::string names[] = {"zombie1", "zombie2",
                                      "zombie3", "zombie4",
                                      "zombie5", "zombie6"};
  int index = std::rand() % 6;
  return names[index];
}

void ZombieHorde::announce(void) {
  std::cout << "ZombieHorde is announcing!\n";
  for (int i = 0; i < this->size; i++)
    this->zombies[i].announce();
}
