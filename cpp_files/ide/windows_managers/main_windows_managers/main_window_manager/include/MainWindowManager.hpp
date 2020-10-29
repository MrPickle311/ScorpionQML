#ifndef MAINWINDOWMANAGER_HPP
#define MAINWINDOWMANAGER_HPP

#include <QObject>

namespace ide::main_windows
{

class MainWindowManager : public QObject
{
    Q_OBJECT
    using self = MainWindowManager&;
    using Parent = QObject*;
public:
    explicit MainWindowManager(Parent);
};

}
#endif // MAINWINDOWMANAGER_HPP
