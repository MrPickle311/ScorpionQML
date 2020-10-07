#ifndef BUTTONSMANAGER_HPP
#define BUTTONSMANAGER_HPP

#include "includeArea.hpp"

namespace ide
{
///zadania tej klasy
/// - odbieranie sygnałów od ButtonsColumn
/// - przetwarzanie ich
/// - nadawanie sygnałów do StartWindowsManager
/// - ta klasa nie tworzy żadnych menedżerów

class ButtonsCollumnManager : public Manager_base
{
    using self = ButtonsCollumnManager&;
public:
    explicit ButtonsCollumnManager(Parent = nullptr);
public slots:
    Q_INVOKABLE void startNewFileManager();//otwiera osobne okno tworzenia nowego dokumentu,ale nie zamyka istniejącego
    Q_INVOKABLE void startMainWindowManager(MainWindowExecuteMode const);
    Q_INVOKABLE void exit();
signals:
    void closing(ClosingCode);
};

}
#endif // BUTTONSMANAGER_HPP
