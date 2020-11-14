#pragma once

#include "IncludeArea.hpp"

namespace ide::start
{
	class ButtonsCollumnManager : public ManagerBase
	{
		Q_OBJECT
		using self = ButtonsCollumnManager&;
	public:
		explicit ButtonsCollumnManager(Parent = nullptr);
	public:
		virtual ~ButtonsCollumnManager();
	public slots://to są sloty tylko dla QMl
		Q_INVOKABLE void startNewFileWindow();
		Q_INVOKABLE void startMainWindow(Codes::MainWindowExecuteMode const);
		Q_INVOKABLE void exit();
	signals:
		void closing(Codes::ClosingCode);
		void executeLoadFileWindowsManager();
		void executeNewFileWindowsManager();
		void executeMainWindowsManager();
	};
}
