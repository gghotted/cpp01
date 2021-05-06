#include "Human.hpp"

Human::Human(void) {}

Human::~Human(void) {}

std::string Human::identify(void) {
  return this->brain.identify();
}

Brain& Human::getBrain(void) {
  return this->brain;
}
