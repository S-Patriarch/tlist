#include "tlist.hh"
#include "pl/color.hh"
#include <iostream>
#include <string>
#include <utility>

namespace tl {
  void TaskList::add_entry()
  {
    using std::string;
    using std::getline;
    using std::cout;
    using std::endl;

    string enterDate {};
    string enterNote {};

    cout << pl::mr::bold << "W: " << pl::mr::reset
         << "для ввода даты используйте формат ДД-ММ-ГГГГ"
         << endl;

    cout << "\ndate > ";
    getline(std::cin, enterDate);
    cout << "note > ";
    getline(std::cin, enterNote);

    m_hashTable->emplace(std::make_pair(enterDate, enterNote));
  }
}
