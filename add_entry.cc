#include "tlist.hh"
#include "pl/color.hh"
#include <utility>

namespace tl {
  void TaskList::add_entry()
  {
    using std::getline;

    string enterDate {};
    string enterNote {};

    pl::Color color;
    cout << color.esc_tb(pl::Color::color::BLUE) << "W: "
         << color.esc_c()
         << "для ввода даты используйте формат ДД-ММ-ГГГГ"
         << endl;

    cout << "\ndate > ";
    getline(std::cin, enterDate);
    cout << "note > ";
    getline(std::cin, enterNote);

    m_hashTable->emplace(std::make_pair(enterDate, enterNote));
  }
}
