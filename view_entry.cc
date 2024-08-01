#include "tlist.hh"
#include "pl/color.hh"
#include "pl/conio.hh"
#include <iostream>

namespace tl {
  void TaskList::view_entry() const
  {
    using std::cout;
    using std::endl;

    cout << endl;
    for (const auto& [k, v] : (*m_hashTable)) {
      cout << "  " << k << '\n'
           << "  " << v << '\n';
    }

    pl::Conio conio;
    conio.get_ch();
  }
}
