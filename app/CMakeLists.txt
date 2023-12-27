
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_executable(HelloCMakeWindow
    main.cc
    widget.ui
    Widget.cc)
target_link_libraries(HelloCMakeWindow PUBLIC
    Library
    Qt${QT_VERSION_MAJOR}::Widgets)
