#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony {
 public:
  Pony(const char *name);
  ~Pony(void);

 private:
  const char *name;
};

#endif
