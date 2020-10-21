#include <QQmlApplicationEngine>
#include "cpp_files/ide/main_manager/include/MainManager.hpp"
#include <iostream>

int main(int argc, char *argv[])
{
    setAllAppAttributes();
    QGuiApplication app{argc,argv};
	ide::main::MainManager manager{};
    manager.run();
    return  app.exec();
}
