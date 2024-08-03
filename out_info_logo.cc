#include "other.hh"
#include "pl/dt.hh"
#include "pl/color.hh"

namespace tl {
  void out_info_logo()
  {
    pl::Color color;
    pl::DateTime dt;
    cout << "Список задач 1.0.0\n"
         << "Для вызова справки введите [?]\n"
         << color.esc_tb(pl::Color::color::BLUE)
         << dt.date_conversion(dt.get_date(), pl::DateTime::dcf::DCF_BdY)
         << color.esc_c()
         << '\n'
         << endl;
  }
}
