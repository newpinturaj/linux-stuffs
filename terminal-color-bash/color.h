#ifndef _FORMAT_H_
#define _FORMAT_H_

#include <iostream>
#include <initializer_list>
#include <vector>

namespace Format{
  enum code {
    none, bold, dim, italics, underlined, blink, reverse, hidden
  };
}

namespace FG_Color{
  enum code {
    black = 30, red, green, yellow, blue, magneta, cyan, lgrey,
    none = 39,
    dgrey = 90, lred, lgreen, lyellow, lblue, lmagenta, lcyan, white
  };
}

namespace BG_Color{
  enum code {
    black = 40, red, green, yellow, blue, magenta, cyan, lgrey,
    none = 49,
    dgrey = 100, lred, lgreen, lyellow, lblue, lmagenta, lcyan, white
  };
}

namespace Reset_Format{
  enum code {
    all = 0, 
    bold = 21, dim, underlined, blink,
    reverse = 27, hidden
  };
}

namespace color {
  class set{
    std::vector<int> code;

    public:
      set(std::initializer_list<int> _code);
      friend std::ostream &operator<<(std::ostream &os, const set &obj);
  };

  class reset{
    std::vector<int> code;

    public:
      reset(std::initializer_list<int> _code);
      friend std::ostream &operator<<(std::ostream &os, const reset  &obj);
  };
  std::ostream &operator<<(std::ostream &os, const set &obj);
  std::ostream &operator<<(std::ostream &os, const reset &obj);
}


#endif