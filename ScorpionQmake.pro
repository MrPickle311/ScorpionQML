QT += quick
QT += core
QT += qml

CONFIG += c++17


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        cpp_files/debug.cpp \
        cpp_files/ide/global_definitons/src/GlobalDefinitions.cpp \
        cpp_files/ide/main_manager/src/mainmanager.cpp \
        cpp_files/ide/main_manager/src/mainmanager_notifier.cpp \
        cpp_files/ide/main_manager/src/mainmanagerconnectionscreator.cpp \
        cpp_files/ide/main_manager/src/managers_executer.cpp \
        cpp_files/ide/main_manager/src/nonqtactionswrapper.cpp \
        cpp_files/ide/main_manager/src/qobject_adapter.cpp \
        cpp_files/ide/qml_files_managers/start_windows_qml_files_manager/src/startwindowqmlfilesmanager.cpp \
        cpp_files/ide/windows_managers/main_windows_managers/main_window_manager/src/mainwindowmanager.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/buttonscollumnmanager.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/codes.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/connectionscreator.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/recentfilesmanager.cpp \
        cpp_files/ide/windows_managers/start_windows_managers/src/startwindowsmanager.cpp \
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
    cpp_files/ide/global_definitons/include/GlobalDefinitions.hpp \
    cpp_files/ide/global_definitons/include/singletonTreats.hpp \
    cpp_files/ide/main_manager/include/includeArea.hpp \
    cpp_files/ide/main_manager/include/mainmanager.hpp \
    cpp_files/ide/main_manager/include/mainmanager_notifier.hpp \
    cpp_files/ide/main_manager/include/mainmanagerconnectionscreator.hpp \
    cpp_files/ide/main_manager/include/managers_executer.hpp \
    cpp_files/ide/main_manager/include/nonqtactionswrapper.hpp \
    cpp_files/ide/main_manager/include/qobject_adapter.hpp \
    cpp_files/ide/qml_files_managers/start_windows_qml_files_manager/include/startwindowqmlfilesmanager.hpp \
    cpp_files/ide/windows_managers/main_windows_managers/main_window_manager/include/mainwindowmanager.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/buttonscollumnmanager.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/codes.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/connectionscreator.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/includeArea.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/recentfilesmanager.hpp \
    cpp_files/ide/windows_managers/start_windows_managers/include/startwindowmanager.hpp

