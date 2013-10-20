#include "dummy.h"
#include <assert.h>
#include <iostream>


int main() {
  Dummy d;
  d.store("Hi, How are you?");

  std::string out;
  d.pop_modified(out);
  assert("Was said Hi, How are you?" == out);
  std::cout << out << std::endl;

  return 0;
}
