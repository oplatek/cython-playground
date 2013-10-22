#include "dummy.h"


void A::pop_modified(std::string & out) {
  out.clear();
  out.append("A");
}


void B::pop_modified(std::string & out) {
  out.clear();
  out.append("B");
}


Wrapper::~Wrapper() {
  if (p!=NULL) delete p;
  p = NULL;
}


