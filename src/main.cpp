#include "database.hpp"
#include "helloworld.h"
#include <cstring>
#include <gtkmm/application.h>
#include <iostream>

int main(int argc, char *argv[]) {
  Database db;

  if (argc == 2 && std::strcmp(argv[1], "store") == 0) {
    std::string content = "";
    std::string line;
    while (std::getline(std::cin, line)) {
      content += line + "\n";
    }

    db.create_table();
    db.store_content(content);
  } else {
    auto app = Gtk::Application::create();

    return app->make_window_and_run<HelloWorld>(argc, argv);
  }
}
