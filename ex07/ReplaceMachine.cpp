#include "ReplaceMachine.hpp"

// constructor

ReplaceMachine::ReplaceMachine(void) {}

ReplaceMachine::ReplaceMachine(std::string fileName,
                               std::string src,
                               std::string dst) {
  if (src.empty() || dst.empty())
    throw std::invalid_argument("not allowed empty argument2 and argument3");
  this->fileName = fileName;
  this->src = src;
  this->dst = dst;
  this->readFile();
}

ReplaceMachine::~ReplaceMachine(void) {}

// public method

void ReplaceMachine::replace(void) {
  size_t pos = 0;
  while ((pos = this->content.find(this->src, pos)) != std::string::npos) {
    this->content.replace(pos, src.length(), this->dst);
    pos += this->dst.length();
  }
}

int ReplaceMachine::save(void) {
  std::ofstream ofs(this->fileName + ".replace");
  if (ofs.fail())
    return -1;
  ofs << this->content;
  return 1;
}

// private method

void ReplaceMachine::readFile(void) {
  std::ifstream ifs(fileName);
  if (ifs.fail())
    throw std::invalid_argument(this->fileName + ": " + strerror(errno));
  std::stringstream ss;
  ss << ifs.rdbuf();
  this->content = ss.str();
}
