#include "tlist.hh"
#include <fstream>
#include <sys/stat.h>
#include <array>

namespace tl {
   bool TaskList::check_files()
      // функция проверяет служебные файлы
      // если какого-то файла нет, то он создается
   {
      if (m_filePath!="") {
         const char* dirPath = m_filePath.c_str();
         mkdir(dirPath,0700);

         std::array<std::string,2> arr {m_fileData,m_fileConfig};
         std::fstream fs;
         for (const auto& file : arr) {
            fs.open(file,std::ios::in|std::ios::out|std::ios::app);
            if (!fs.is_open()) return false;
            else fs.close();
         }
      }
      return true;
   }
}
