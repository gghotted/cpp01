#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include <string>
#include <cstdlib>
#include "Zombie.hpp"

class ZombieHorde {
 public:
  ZombieHorde(int n);
  ~ZombieHorde(void);

  void announce(void);

 private:
  static std::string generateRandomName(void);

  Zombie* zombies;
  int size;
};

#endif
