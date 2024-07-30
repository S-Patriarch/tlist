// (c) 2024 S-Patriarch
// Task list (список задач).

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
      cerr << "E: service files chack failed" << endl;
      std::exit(EXIT_FAILURE);
   }

   cout << pl::mr::clrscr;
   tlist.info();

   std::exit(EXIT_SUCCESS);
}
