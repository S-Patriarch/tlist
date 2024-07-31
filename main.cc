/*
 * Copyright (C) 2024, S-Patriarch.
 *
 * Список задач.
 * Данный проект реализуется под дивизом "Слабоумие и Отвага".
 */

#include "tlist.hh"
#include "pl/conio.hh"
#include <iostream>

int main()
{
  using std::cout;
  using std::cerr;
  using std::endl;

  tl::TaskList tlist;

  if (!tlist.check_files()) {
    cerr << "E: служебные файлы не прошли проверку" << endl;
    std::exit(EXIT_FAILURE);
  }

  cout << pl::mr::clrscr;
  tlist.info();

  std::exit(EXIT_SUCCESS);
}
