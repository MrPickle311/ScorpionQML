#pragma once

#include "includeArea.hpp"

namespace ide::main
{
	class ManagersExecuter : public Manager_base
	{
		using Parent = QObject*;
		using self = ManagersExecuter&;
		Q_OBJECT
	private:
		QSharedPointer<start::StartWindowsManager> swm_;
		QSharedPointer<main_windows::MainWindowManager>          mwm_;
	public:
		ManagersExecuter(Parent);
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
