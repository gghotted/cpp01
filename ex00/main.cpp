#include "Pony.hpp"

void ponyOnTheHeap(void) {
  Pony *pony = new Pony("onHeap");
  delete pony;
}

void ponyOnTheStack(void) {
  Pony pony("onStack");
}

int main(void) {
  ponyOnTheHeap();
  ponyOnTheStack();
  return 0;
}
