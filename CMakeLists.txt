cmake_minimum_required(VERSION 3.14)

project(Scorpion LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt5 COMPONENTS Core Quick REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Quick REQUIRED)

add_executable(Scorpion
      main.cpp
      qml.qrc
    )

add_subdirectory(cpp_files/windows_managers)
add_subdirectory(cpp_files/engine_manager)

target_link_libraries(Scorpion PUBLIC
    WindowsManagers
    EngineManager)

target_compile_definitions(Scorpion
  PUBLIC $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>)
target_link_libraries(Scorpion
  PUBLIC Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Quick)
