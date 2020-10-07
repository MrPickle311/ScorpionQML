#ifndef STARTWINDOWSMANAGER_HPP
#define STARTWINDOWSMANAGER_HPP

#include "connectionscreator.hpp"

namespace ide
{

class StartWindowsManager : public WindowsManager_base
{
    using self = StartWindowsManager&;
private:
    std::unique_ptr<QQmlApplicationEngine> swme_;
private:
    QSharedPointer<ButtonsCollumnManager> bcm_;
    QSharedPointer<ConnectionsCreator> cc_;
    QSharedPointer<RecentFilesManager> rfm_;
public:
    explicit StartWindowsManager(Parent);
private:
    void executeStartWindow();
    void executeConnectionsCreator();
public:
    void runStartWindowsManager();
    void registerTypes();
    void registerEnums();
signals:
    // klasa ta wysyła sygnały do MainManager ,po wybraniu opcji przez klienta
    void closing(ClosingCode);
    void runLoadFileWindowManager(MainWindowExecuteMode);
    void runMainWindowManager();
    void runNewFileManager();
public slots:
    void close(ClosingCode);
};

}
#endif // STARTWINDOWSMANAGER_HPP
