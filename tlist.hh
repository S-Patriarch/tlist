#ifndef TLIST_HH
#define TLIST_HH

#include <cstdlib>
#include <string>
#include <unordered_map>

namespace tl {
  class TaskList {
    using multimap_t = std::unordered_multimap<std::string,std::string>;
    multimap_t*  m_hashTable;
    std::string  m_filePath;
    std::string  m_fileData;
    std::string  m_fileConfig;
  public:
    TaskList()
      : m_filePath{}, m_fileData{}, m_fileConfig{}
    {
      const char* dir {"HOME"};
      char* dirHome = std::getenv(dir);
      if (dirHome!=nullptr) {
        m_filePath = static_cast<std::string>(dirHome)+"/.tlist";
        m_fileData = m_filePath+"/tlist";
        m_fileConfig = m_filePath+"/tlistrc";
      }
      m_hashTable = new multimap_t;
    }
    ~TaskList()
    {
      delete m_hashTable;
      m_hashTable = nullptr;
    }

    void info_out_terminal() const;
    bool check_files() const;
  };
}

#endif
