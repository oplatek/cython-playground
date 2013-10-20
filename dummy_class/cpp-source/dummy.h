#ifndef DUMMY_CLASS_DUMMY_H
#define DUMMY_CLASS_DUMMY_H value
#include <string>

class PopInterface {
  public:
    virtual void pop_modified(std::string & out)=0;  // virtual method declares interface
    virtual ~PopInterface() {}
};

class Dummy: public PopInterface {
  public:
    void store(const std::string & in);
    virtual void pop_modified(std::string & out);
    virtual ~Dummy() {};

  private:
    std::string buff_;
};


class Dummy2: public PopInterface {
  public:
    virtual void pop_modified(std::string & out);
    virtual ~Dummy2() {};
};


class Wrapper {
  public:
    ~Wrapper(); 
    void pop_string(std::string & out_s) { p->pop_modified(out_s); }

    PopInterface *p;
};

#endif
