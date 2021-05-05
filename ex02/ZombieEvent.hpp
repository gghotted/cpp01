#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent {
 public:
  static void setZombieType(std::string type);
  static Zombie* newZombie(std::string name);
  static Zombie randomChump(void);

 private:
  static std::string generateRandomName(void);

  static std::string type;
};

#endif
