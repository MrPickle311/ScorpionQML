#ifndef STARTWINDOWSMANAGER_HPP
#define STARTWINDOWSMANAGER_HPP

#include <QObject>

class StartWindowsManager : public QObject
{
    Q_OBJECT
public:
    explicit StartWindowsManager(QObject *parent = nullptr);

signals:

};

#endif // STARTWINDOWSMANAGER_HPP
