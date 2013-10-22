#include "dummy.h"
#include <assert.h>
#include <iostream>


int main() {
  A a;
  std::string out1;
  a.pop_modified(out1);
  assert("A" == out1);

  B b;
  std::string out2;
  b.pop_modified(out2);
  assert("B" == out2);

  Wrapper w;
  w.p = new A();
  std::string out3;
  w.pop_string(out3);
  assert("A" == out3);

  delete w.p;
  w.p = new B();
  std::string out4;
  w.pop_string(out4);
  assert("B" == out4);


  std::cout << out1 << std::endl << out2 << std::endl;
  std::cout << out3 << std::endl << out4 << std::endl;

  return 0;
}
