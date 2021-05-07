#ifndef REPLACE_MACHINE_HPP
#define REPLACE_MACHINE_HPP

#include <string>
#include <stdexcept>
#include <fstream>
#include <sstream>

class ReplaceMachine {
 public:
  ReplaceMachine(void);
  ReplaceMachine(std::string fileName, std::string src, std::string dst);
  ~ReplaceMachine(void);

  void replace(void);
  int save(void);

 private:
  void readFile(void);

  std::string content;
  std::string fileName;
  std::string src;
  std::string dst;
};

#endif
