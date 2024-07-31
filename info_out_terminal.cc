#include "tlist.hh"
#include <iostream>

namespace tl {
  void TaskList::info_out_terminal() const
    // функция выводит логотип, справку и приглашение к работе
  {
    std::cout << "Task list. Version 1.0.0\n"
              << "\nCommands:\n"
              << "  a - add entry\n"
              << "  d - delete entry\n"
              << "  e - edit entry\n"
              << "  q - exit\n"
              << "\n:";
  }
}
