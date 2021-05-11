#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void) {
  std::srand(std::time(0));
  ZombieHorde horde(3);
  horde.announce();
  return 0;
}
