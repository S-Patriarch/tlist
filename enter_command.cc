#include "pl/conio.hh"

namespace tl {
  std::string enter_command()
  {
    pl::Conio conio;
    std::cout << "> ";
    return conio.get_line(3);
  }
}
