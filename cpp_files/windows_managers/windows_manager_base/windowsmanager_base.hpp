#ifndef WINDOWMANAGER_BASE_H
#define WINDOWMANAGER_BASE_H

#include <QObject>

class WindowsManager_base : public QObject
{
    Q_OBJECT
public:
    explicit WindowsManager_base(QObject *parent = nullptr);

signals:

};

#endif // WINDOWMANAGER_BASE_H
