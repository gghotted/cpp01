#include "Brain.hpp"

Brain::Brain(void) {}

Brain::~Brain(void) {}

std::string Brain::identify(void) {
  std::stringstream ss;
  ss << this;
  std::string ptr = ss.str();
  for (int i = 2; i < ptr.length(); i++)
    ptr[i] = std::toupper(ptr[i]);
  return ptr;
}
