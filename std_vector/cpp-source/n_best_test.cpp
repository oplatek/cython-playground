#include "n_best.h"
#include <assert.h>
#include <vector>
#include <stdlib.h>
#include <iostream>

int main() {
  std::vector<std::vector<int> > x; 
  nbest::fill_2d(x);
  
  assert(x[1][1] == 2);
  assert(x[3][3] == 6);
  assert(x[9][9] == 18);
  return 0;
}
