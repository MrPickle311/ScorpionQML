#ifndef TEST_H
#define TEST_H
#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "cpp_files/ide/qml_files_managers/start_windows_qml_files_manager/include/startwindowqmlfilesmanager.hpp"

class zzz : public QObject
{
    Q_OBJECT
    QGuiApplication* app;
    QQmlApplicationEngine* engine;
public:
    zzz(int argc, char *argv[]);
    int run();
};

//int run(int argc, char *argv[])
//{
//    QSharedPointer<QGuiApplication> app = QSharedPointer<QGuiApplication>(new QGuiApplication(argc,argv));
//    QSharedPointer<QQmlApplicationEngine> engine = QSharedPointer<QQmlApplicationEngine>(new QQmlApplicationEngine(app.get()));
//    engine->load(ide::StartWindowQmlFilesManager::get().getStartWindowUrl());

//    return app->exec();
//}
#endif // TEST_H
