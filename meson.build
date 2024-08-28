project('mashiclip', 'cpp')

executable(
  meson.project_name(),
  'src/main.cpp',
  'src/database.hpp',
  'src/database.cpp',
  'src/main_window.hpp',
  'src/main_window.cpp',
  dependencies: [
    dependency('gtkmm-4.0'),
    dependency('sqlite3')
  ],
  install: true
)
