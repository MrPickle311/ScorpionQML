#ifndef BUTTONSMANAGER_HPP
#define BUTTONSMANAGER_HPP

#include "includeArea.hpp"
#include "codes.hpp"

namespace ide
{
///zadania tej klasy
/// - odbieranie sygnałów od ButtonsColumn
/// - przetwarzanie ich
/// - nadawanie sygnałów do StartWindowsManager
/// - ta klasa nie tworzy żadnych menedżerów

class ButtonsCollumnManager : public QObject
{
    Q_OBJECT
    using self = ButtonsCollumnManager&;
    using Parent = QObject*;
    // poniższe deklaracje są potrzebne ,by qml rozpoznawał typ enum'a
    using ClosingCode = Codes::ClosingCode;
    using MainWindowExecuteMode = Codes::MainWindowExecuteMode;
public:
    explicit ButtonsCollumnManager(Parent);
public slots:
    Q_INVOKABLE void startNewFileManager();//otwiera osobne okno tworzenia nowego dokumentu,ale nie zamyka istniejącego
    Q_INVOKABLE void startMainWindowManager(MainWindowExecuteMode const);
    Q_INVOKABLE void exit();
signals:
    void closing(Codes::ClosingCode);
};

}
#endif // BUTTONSMANAGER_HPP
