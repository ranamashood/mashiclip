#ifndef DATABBASE_HPP
#define DATABBASE_HPP

#include "sqlite3.h"
#include <string>

class Database {
  sqlite3 *db;
  char *msg_err;

  bool exec_query(std::string query);

public:
  Database();
  void create_table();
  void store_content(std::string content);
};

#endif // !DATABBASE_HPP
