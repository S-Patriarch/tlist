#include "tlist.hh"
#include <iostream>

namespace tl {
  void TaskList::info()
    // функция выводит логотип, справку и приглашение к работе
  {
    std::cout << "Task list. Version 1.0.0\n"
              << "(c) 2024 S-Patriarch\n"
              << "\nCommands:\n"
              << "  a - add entry\n"
              << "  d - delete entry\n"
              << "  e - edit entry\n"
              << "  q - exit\n"
              << "\n:";
  }
}
