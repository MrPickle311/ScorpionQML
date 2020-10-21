#include "debug.h"

zzz::zzz(int argc, char *argv[]) :
    app(nullptr),
    engine(nullptr)
{
    app = new QGuiApplication(argc,argv);
    engine = new QQmlApplicationEngine(app);
}

int zzz::run()
{
    engine->load(ide::StartWindowQmlFilesManager::get().getStartWindowUrl());

    return app->exec();
}
