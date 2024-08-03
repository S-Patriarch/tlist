/*
 * Copyright (C) 2024, S-Patriarch.
 *
 * Список задач.
 * Данный проект реализуется под девизом "Слабоумие и Отвага".
 */

#include "tlist.hh"
#include "other.hh"
#include "pl/color.hh"
#include "pl/conio.hh"

int main()
{
  using std::strncmp;

  tl::TaskList tlist;

  if (!tlist.check_files()) {
    cerr << "E: служебные файлы не прошли проверку" << endl;
    std::exit(EXIT_FAILURE);
  }

  cout << pl::mr::clrscr;
  tl::out_info_logo();

  pl::Color color;
  string enterCommand = tl::enter_command();
  bool isFlageClrScr {true};
  for (;;) {
    if (strncmp("?", enterCommand.c_str(), 1) == 0
      || strncmp("h", enterCommand.c_str(), 1) == 0
      || strncmp("H", enterCommand.c_str(), 1) == 0) {
      cout << pl::mr::clrscr;
      tl::out_info_logo();
      tl::out_info_help();
      isFlageClrScr = false;
    } else if (strncmp("q", enterCommand.c_str(), 1) == 0
      || strncmp("Q", enterCommand.c_str(), 1) == 0) {
      cout << color.esc_tb(pl::Color::color::BLUE) << "W: "
           << color.esc_c()
           << "до новых встреч\n"
           << endl;
      std::exit(EXIT_SUCCESS);
    } else if (strncmp("a", enterCommand.c_str(), 1) == 0
      || strncmp("A", enterCommand.c_str(), 1) == 0) {
      tlist.add_entry();
      isFlageClrScr = true;
    } else if (strncmp("v", enterCommand.c_str(), 1) == 0
      || strncmp("V", enterCommand.c_str(), 1) == 0) {
      tlist.view_entry();
      isFlageClrScr = true;
    }

    if (isFlageClrScr) {
      cout << pl::mr::clrscr;
      tl::out_info_logo();
    } 
    enterCommand = tl::enter_command();
  }
}
