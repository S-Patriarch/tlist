#ifndef TLIST_HH
#define TLIST_HH

#include <cstdlib>
#include <string>
#include <iostream>
#include <unordered_map>

using std::cout;
using std::cerr;
using std::endl;
using std::string;

namespace tl {
  using multimap_t = std::unordered_multimap<string, string>;

  class TaskList {
    multimap_t* m_hashTable;
    string m_filePath;
    string m_fileData;
    string m_fileConfig;
  public:
    TaskList()
      : m_filePath{}, m_fileData{}, m_fileConfig{}
    {
      const char* dir {"HOME"};
      char* dirHome = std::getenv(dir);
      if (dirHome != nullptr) {
        m_filePath = static_cast<string>(dirHome) + "/.tlist";
        m_fileData = m_filePath + "/tlist";
        m_fileConfig = m_filePath + "/tlistrc";
      }
      m_hashTable = new multimap_t;
    }
    
    ~TaskList()
    {
      delete m_hashTable;
      m_hashTable = nullptr;
    }

    bool check_files() const;
    void add_entry();
    void view_entry() const;
  };
}

#endif
