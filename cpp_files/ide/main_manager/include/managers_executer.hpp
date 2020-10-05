#ifndef MANAGERS_EXECUTER_HPP
#define MANAGERS_EXECUTER_HPP

#include "includeArea.hpp"

namespace ide
{

class Managers_executer : public QObject
{
    using Parent = QObject*;
    using self = Managers_executer&;
    Q_OBJECT
private:
    QSharedPointer<StartWindowsManager> swm_;
    QSharedPointer<MainWindowManager>   mwm_;
public:
    Managers_executer(Parent);
public:
    void registerTypes();
    void registerEnums();
signals:
    void startWindowsManagerExecuted();
    void mainWindowsManagerExecuted();
public slots:
    void executeStartWindowsManager();
    void executeMainWindowsManager();
};

}

#endif // MANAGERS_EXECUTER_HPP
