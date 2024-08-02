#include "pl/dt.hh"
#include <iostream>

namespace tl {
  void out_info_help()
  {
    pl::DateTime dt;
    std::cout << "Список задач помогает отслеживать и систематизировать задачи, "
              << "которые необходимо \nвыполнить. Он позволяет приоритизировать "
              << "задачи по их важности и срочности, чтобы \nсосредоточиться на "
              << "самых важных делах. Составление списка задач может помочь \n"
              << "снизить стресс и беспокойство, связанные с забыванием или "
              << "перегрузкой задачами. \nЗаписывая задачи в список, вы "
              << "освобождаете свою память, позволяя сосредоточиться \nна "
              << "других вещах.\n"
              << '\n'
              << "Команды:\n"
              << "  ? - справка\n"
              << "  a - добавить запись\n"
              << "  d - удалить запись\n"
              << "  e - редактировать запись\n"
              << "  v - смотреть\n"
              << "  q - выход\n"
              << std::endl;
  }
}
