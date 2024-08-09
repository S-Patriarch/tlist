#include "tlist.h"
#include "pl/color.h"
#include "pl/conio.h"

namespace tl {
  void TaskList::view_entry() const
  {
    cout << endl;
    for (const auto& [k, v] : (*m_hashTable)) {
      cout << "  " << k << '\n'
           << "  " << v << '\n';
    }

    pl::Conio conio;
    conio.get_ch();
  }
}
