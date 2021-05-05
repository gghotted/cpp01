#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <string>
#include <cstdlib>
#include <ctime>
#include "Zombie.hpp"

class ZombieEvent {
 public:
  ZombieEvent(void);
  ~ZombieEvent(void);

  void setZombieType(std::string type);
  Zombie* newZombie(std::string name);
  Zombie randomChump(void);

 private:
  static std::string generateRandomName(void);

  std::string type;
};

#endif
