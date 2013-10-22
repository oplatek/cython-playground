#ifndef DUMMY_CLASS_DUMMY_H
#define DUMMY_CLASS_DUMMY_H value
#include <string>

class PopInterface {
  public:
    virtual void pop_modified(std::string & out)=0;  // virtual method declares interface
    virtual ~PopInterface() {}
};

class A: public PopInterface {
  public:
    virtual void pop_modified(std::string & out);
    virtual ~A() {};
};


class B: public PopInterface {
  public:
    virtual void pop_modified(std::string & out);
    virtual ~B() {};
};


class Wrapper {
  public:
    ~Wrapper(); 
    void pop_string(std::string & out_s) { p->pop_modified(out_s); }

    PopInterface *p;
};

#endif
