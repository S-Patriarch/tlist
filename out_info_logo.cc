#include "pl/dt.hh"
#include <iostream>

namespace tl {
  void out_info_logo()
  {
    pl::DateTime dt;
    std::cout << "Список задач 1.0.0\n"
              << "Для вызова справки введите [?]\n"
              << dt.date_conversion(dt.get_date(), pl::DateTime::dcf::DCF_BdY)
              << '\n'
              << std::endl;
  }
}
