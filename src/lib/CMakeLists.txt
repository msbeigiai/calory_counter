add_library(Library STATIC
    Person.cc
    People.cc)

target_include_directories(Library PUBLIC
    "./")

target_link_libraries(Library PUBLIC
    Qt${QT_VERSION_MAJOR}::Widgets)
