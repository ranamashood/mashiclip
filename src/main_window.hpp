#ifndef MAIN_WINDOW_HPP
#define MAIN_WINDOW_HPP

#include "gtkmm/box.h"
#include "gtkmm/window.h"

class MainWindow : public Gtk::Window {
  Gtk::Box box;

public:
  MainWindow();
};

#endif // !MAIN_WINDOW_HPP
