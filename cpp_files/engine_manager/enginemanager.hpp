#ifndef ENGINEMANAGER_HPP
#define ENGINEMANAGER_HPP

#include <QObject>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

class EngineManager : public QObject
{
    Q_OBJECT
public:
    explicit EngineManager(QObject *parent = nullptr);

signals:

};

#endif // ENGINEMANAGER_HPP
