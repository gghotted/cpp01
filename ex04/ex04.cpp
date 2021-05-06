#include <string>
#include <iostream>

int main(void) {
  std::string msg("HI THIS IS BRAIN");
  std::string* ptr = &msg;
  std::string& ref = msg;

  std::cout << *ptr << '\n';
  std::cout << ref << '\n';
  return 0;
}
