#ifndef OTHER_H
#define OTHER_H

#include <string>
#include <iostream>

namespace tl {
  using std::cout;
  using std::cerr;
  using std::endl;
  using std::string;

  void out_info_logo();
  void out_info_help();
  string enter_command();
}

#endif
