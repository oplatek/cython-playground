#include "test.h"
#include <assert.h>

int main() {
  playground::Test t;
  assert(t.number() == 3);
  return 0;
}
