#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(int argc, char **argv) {
  if (argc != 2)
  {
    std::cout << "invalid arguments\n";
    return 0;
  }
  std::srand(std::time(0));
  ZombieHorde horde(std::atoi(argv[1]));
  horde.announce();
  return 0;
}
