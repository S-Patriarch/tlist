/*
 * Copyright (C) 2024, S-Patriarch.
 *
 * Список задач.
 * Данный проект реализуется под девизом "Слабоумие и Отвага".
 */

#include "tlist.hh"
#include "pl/conio.hh"
#include <iostream>

int main()
{
  using std::cout;
  using std::cerr;
  using std::endl;
  using std::strncmp;

  tl::TaskList tlist;

  if (!tlist.check_files()) {
    cerr << "E: служебные файлы не прошли проверку" << endl;
    std::exit(EXIT_FAILURE);
  }

  cout << pl::mr::clrscr;
  tlist.info_out_terminal();

  std::string enterCommand = tlist.enter_command();
  for (;;) {
    if (strncmp("q",enterCommand.c_str(),1)==0
      || strncmp("Q",enterCommand.c_str(),1)==0) {
      cout << "\nW: до новых встреч\n" << endl;
      std::exit(EXIT_SUCCESS);
    }
    cout << pl::mr::clrscr;
    tlist.info_out_terminal();
    enterCommand = tlist.enter_command();
  }
}
