#include "main_window.hpp"
#include "gtkmm/enums.h"
#include "gtkmm/label.h"

MainWindow::MainWindow() {
  Gtk::Label label1("hello world 1");
  Gtk::Label label2("hello world 2");
  Gtk::Label label3("hello world 3");
  Gtk::Label label4("hello world 4");

  box.append(label1);
  box.append(label2);
  box.append(label3);
  box.append(label4);

  box.set_halign(Gtk::Align::CENTER);
  box.set_spacing(100);

  set_child(box);
}
