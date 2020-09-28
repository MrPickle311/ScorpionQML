cmake_minimum_required(VERSION 3.14)

project(Scorpion LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

project("Scorpion")

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt5 COMPONENTS Core Quick REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Quick REQUIRED)

add_library(EngineManager
    enginemanager.cpp
    enginemanager.hpp)

target_compile_definitions(EngineManager
  PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(EngineManager
  PUBLIC Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Quick
  )
