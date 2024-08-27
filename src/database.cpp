#include "database.hpp"

Database::Database() {}

bool Database::exec_query(std::string query) {
  sqlite3_open("mashiclip.sqlite3", &db);

  int exit = sqlite3_exec(db, query.c_str(), NULL, 0, &msg_err);

  if (exit != SQLITE_OK) {
    sqlite3_free(msg_err);
    return false;
  } else {
    return true;
  }

  sqlite3_close(db);
}

void Database::create_table() {
  std::string query = "CREATE TABLE IF NOT EXISTS history("
                      "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                      "content TEXT NOT NULL);";
  exec_query(query);
}

void Database::store_content(std::string content) {
  std::string query = "INSERT INTO history(content)"
                      "VALUES ('" +
                      content + "');";
  exec_query(query);
}
