#pragma once

#include "includeArea.hpp"
#include "EngineManager.hpp"

namespace ide::main
{
	class ManagersExecuter : public ManagerBase
	{
		using Parent = QObject*;
		using self = ManagersExecuter&;
		Q_OBJECT
	private:
		QSharedPointer<EngineManager>							 em_;
		QSharedPointer<start::StartWindowsManager>               swm_;
		QSharedPointer<main_windows::MainWindowManager>          mwm_;
	public:
		ManagersExecuter(Parent);
		virtual ~ManagersExecuter();
	public:
		void registerTypes();
		void registerEnums();
		start::StartWindowsManager& startWindowsManager() const;
		EngineManager& engineManager();
	signals:
		void startWindowsManagerExecuted();
		void mainWindowsManagerExecuted();
	public slots:
		void executeStartWindowsManager();
		void executeMainWindowsManager();
	};
}
