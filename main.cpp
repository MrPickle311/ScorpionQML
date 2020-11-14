#include <QQmlApplicationEngine>
#include "cpp_files/ide/main_manager/include/MainManager.hpp"
#include <iostream>
#include <filesystem>

int main(int argc, char *argv[])
{
	qDebug(std::filesystem::current_path().c_str());
    setAllAppAttributes();
    QGuiApplication app{argc,argv};
    //app.exit(0);
    ide::main::MainManager manager{};
    manager.run();
    return  app.exec();
}
