#include "tlist.hh"
#include "pl/conio.hh"

namespace tl {
  std::string TaskList::enter_command() const
  {
    pl::Conio conio;
    std::cout << ':';
    return conio.get_line(3);
  }
}
