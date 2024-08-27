project('mashiclip', 'cpp')

executable(
  meson.project_name(),
  'src/main.cpp',
  'src/database.hpp',
  'src/database.cpp',
  'src/helloworld.h',
  'src/helloworld.cpp',
  dependencies: [
    dependency('gtkmm-4.0'),
    dependency('sqlite3')
  ],
  install: true
)
