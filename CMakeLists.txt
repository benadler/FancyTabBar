cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(TabBarDemonstrator)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(SRC  fancytabbar.cpp fancytab.cpp stylehelper.cpp)
set (HEADERS  fancytabbar.h stylehelper.h fancytab.h)

set(DemoSRC main.cpp  demowindow.cpp)
set(DemoHDR demowindow.h)

set(Main2SRC main2.cpp)
set(Main2HDR)

find_package(Qt4 REQUIRED)

add_executable(${PROJECT_NAME}  ${SRC}  ${HEADERS} ${DemoSRC} ${DemoHDR})
target_link_libraries(${PROJECT_NAME} Qt4::QtGui)
set_property( TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 14 )

add_executable(main2  ${SRC} ${HEADERS} ${Main2SRC} ${Main2HDR})
target_link_libraries(main2 Qt4::QtGui)
set_property( TARGET main2 PROPERTY CXX_STANDARD 14 )