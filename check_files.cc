#include "tlist.h"
#include <fstream>
#include <sys/stat.h>
#include <array>

namespace tl {
  bool TaskList::check_files() const
  {
    if (m_filePath == "") {
      return false;
    } else {
      const char* dirPath = m_filePath.c_str();
      mkdir(dirPath, 0700);

      std::array<std::string, 2> arr {m_fileData, m_fileConfig};
      std::fstream fs;
      for (const auto& file : arr) {
        fs.open(file, std::ios::in|std::ios::out|std::ios::app);
        if (!fs.is_open()) return false;
        else fs.close();
      }
      return true;
    }
  }
}
