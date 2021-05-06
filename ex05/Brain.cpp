#include "Brain.hpp"

static void touppers(std::string& str) {
  int len = str.length();
  for (int i = 0; i < len; i++)
    str[i] = std::toupper(str[i]);
}

Brain::Brain(void) {
  std::stringstream ss;
  ss << this;
  this->_identify = ss.str();
  touppers(this->_identify);
  this->_identify[1] = 'x';
}

Brain::~Brain(void) {}

std::string Brain::identify(void) {
  return this->_identify;
}
