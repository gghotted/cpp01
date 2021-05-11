#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <iomanip>

class Zombie {
 public:
  Zombie(void);
  Zombie(std::string type, std::string name);
  ~Zombie(void);

  void announce(void);

 private:
  void printPrefix(void);

  std::string type;
  std::string name;
};

#endif
