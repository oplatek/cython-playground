#include "dummy.h"


void Dummy::store(const std::string & out) {
  buff_.append(out);
}

void Dummy::pop_modified(std::string & out) {
  out.append("Was said ");
  out.append(buff_);
  buff_.clear();
}


void Dummy2::pop_modified(std::string & out) {
  out.append(" Yours sincerely");
}


Wrapper::~Wrapper() {
  if (p!=NULL) delete p;
  p = NULL;
}


