#include "other.hh"
#include "pl/conio.hh"

namespace tl {
  string enter_command()
  {
    pl::Conio conio;
    cout << "> ";
    return conio.get_line(3);
  }
}
