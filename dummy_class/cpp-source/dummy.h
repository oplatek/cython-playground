#ifndef DUMMY_CLASS_DUMMY_H
#define DUMMY_CLASS_DUMMY_H value
#include <string>

class PopInterface {
  virtual void pop_modified(std::string & out)=0;  // virtual method declares interface
};

class Dummy: public PopInterface {
  public:
    void store(const std::string & in);
    virtual void pop_modified(std::string & out);

  private:
    std::string buff_;
};

#endif
