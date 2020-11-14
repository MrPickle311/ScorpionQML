#pragma once

#include "IncludeArea.hpp"
#include "NewFileWindowManager.hpp"
#include "LoadFileWindowsManager.hpp"

namespace ide::start
{
	class WindowsManagersExecuter : public StartWindowsManagerBase
	{
	private:
		QSharedPointer<NewFileWindowManager>   nfwm_;
		QSharedPointer<LoadFileWindowsManager> lfwm_;
	public:
		explicit WindowsManagersExecuter(QQmlApplicationEngine&,Parent = nullptr);
	public:
		virtual ~WindowsManagersExecuter();
	public:
		void executeNewFileWindowsManager() const;
		void executeLoadFileWindowsManager() const;
		NewFileWindowManager& getNewFileWindowManager() const;
		LoadFileWindowsManager& getLoadFileWindowManager() const;

		// WindowsManagerBase interface
	public:
		virtual void execute();
	};
}
