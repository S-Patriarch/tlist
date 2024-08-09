#include "other.h"
#include "pl/conio.h"

namespace tl {
  string enter_command()
  {
    pl::Conio conio;
    cout << "> ";
    return conio.get_line(3);
  }
}
