cmake_minimum_required(VERSION 3.14)

project(staffMember LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

add_executable(staffMember
  main.cpp
  staffmember.cpp
  staffmember.h
  memberlist.h
  memberlist.cpp
  memberwriter.h
  memberwriter.cpp
  memberinput.h
  memberinput.cpp

)
target_link_libraries(staffMember Qt${QT_VERSION_MAJOR}::Widgets)
