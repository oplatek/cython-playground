#include "n_best.h"
#include <stdlib.h>

namespace nbest {

  size_t fill_2d(std::vector<std::vector<int> > & v_out) {
    // v_out should be empty
    for (size_t i = 0; i < 10; ++i) {
      std::vector<int> a;
      for (size_t j = 0; j < i+1; ++j) {
        a.push_back(i+j);
      }
      v_out.push_back(a);
    }
  }

}
