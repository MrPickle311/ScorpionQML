#ifndef MAINMANAGER_NOTIFIER_HPP
#define MAINMANAGER_NOTIFIER_HPP

#include <QObject>

namespace ide
{

class MainManager_notifier : public QObject
{
    using Parent = QObject*;
    Q_OBJECT
public:
    MainManager_notifier(Parent);
public:

signals:

public slots:
};

}
#endif // MAINMANAGER_NOTIFIER_HPP
