QT += quick
QT += core
QT += qml

CONFIG += c++17


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        cpp_files/debug.cpp \
        cpp_files/ide/global_definitons/src/IdeObject.cpp \
        cpp_files/ide/main_manager/src/MainManager.cpp \
        cpp_files/ide/main_manager/src/ManagersExecuter.cpp \
        cpp_files/ide/main_manager/src/NonQtActionsWrapper.cpp \
        cpp_files/ide/manager_base/src/CodesInfo.cpp \
        cpp_files/ide/manager_base/src/ManagerBase.cpp \
        cpp_files/ide/manager_base/src/UserNotifier.cpp \
        cpp_files/ide/qml_files_managers/start_windows_qml_files_manager/src/StartWindowQmlFilesManager.cpp \
        cpp_files/ide/scriptfile_manager/src/ScriptFilesManager.cpp \
        cpp_files/ide/windows_managers/main_windows_managers/main_window_manager/src/MainWindowManager.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/ButtonsCollumnManager.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/LoadFileWindowsManager.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/NewFileWindowManager.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/RecentFilesManager.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/StartWindowsManager.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/WindowsManagersExecuter.cpp \
        cpp_files/ide/windows_managers/windows_manager_base/src/EnginesManager.cpp \
        cpp_files/ide/windows_managers/windows_manager_base/src/StartWindowsManagerBase.cpp \
        cpp_files/ide/windows_managers/windows_manager_base/src/WindowsManagerBase.cpp \
        cpp_files/script/scriptfile/src/ScriptFile.cpp \
        main.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    cpp_files/debug.h \
    cpp_files/ide/global_definitons/include/IdeObject.hpp \
    cpp_files/ide/global_definitons/include/SingletonTraits.hpp \
    cpp_files/ide/main_manager/include/MainManager.hpp \
    cpp_files/ide/main_manager/include/ManagersExecuter.hpp \
    cpp_files/ide/main_manager/include/NonQtActionsWrapper.hpp \
    cpp_files/ide/main_manager/include/includeArea.hpp \
    cpp_files/ide/manager_base/include/CodesImpl.hpp \
    cpp_files/ide/manager_base/include/CodesInfo.hpp \
    cpp_files/ide/manager_base/include/IncludeArea.hpp \
    cpp_files/ide/manager_base/include/ManagerBase.hpp \
    cpp_files/ide/manager_base/include/UserNotifier.hpp \
    cpp_files/ide/qml_files_managers/start_windows_qml_files_manager/include/StartWindowQmlFilesManager.hpp \
    cpp_files/ide/scriptfile_manager/include/ScriptFilesManager.hpp \
    cpp_files/ide/windows_managers/main_windows_managers/main_window_manager/include/MainWindowManager.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/ButtonsCollumnManager.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/IncludeArea.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/LoadFileWindowsManager.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/NewFileWindowManager.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/RecentFilesManager.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/StartWindowManager.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/WindowsManagersExecuter.hpp \
    cpp_files/ide/windows_managers/windows_manager_base/include/EnginesManager.hpp \
    cpp_files/ide/windows_managers/windows_manager_base/include/IncludeArea.hpp \
    cpp_files/ide/windows_managers/windows_manager_base/include/StartWindowsManagerBase.hpp \
    cpp_files/ide/windows_managers/windows_manager_base/include/WindowsManagerBase.hpp \
    cpp_files/script/scriptfile/include/ScriptFile.hpp

