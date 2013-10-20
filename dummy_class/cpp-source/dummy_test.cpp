#include "dummy.h"
#include <assert.h>
#include <iostream>


int main() {
  Dummy d;
  d.store("Hi, How are you?");

  std::string out;
  d.pop_modified(out);
  assert("Was said Hi, How are you?" == out);

  Dummy2 d2;
  std::string out2("Hi");
  d2.pop_modified(out2);
  assert("Hi Yours sincerely" == out2);

  Wrapper w;
  w.p = new Dummy2();
  std::string out3("Caio");
  w.pop_string(out3);
  assert("Caio Yours sincerely" == out3);

  delete w.p;
  Dummy *d3 = new Dummy();
  d3->store("Bye");
  w.p = d3;
  std::string out4;
  w.pop_string(out4);
  std::cout << out << std::endl << out2 << std::endl;
  std::cout << out3 << std::endl << out4 << std::endl;
  assert("Was said Bye" == out4);

  std::cout << out << std::endl << out2 << std::endl;
  std::cout << out3 << std::endl << out4 << std::endl;

  return 0;
}
