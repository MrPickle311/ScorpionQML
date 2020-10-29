#pragma once

#include "IncludeArea.hpp"
#include "NewFileWindowManager.hpp"
#include "LoadFileWindowsManager.hpp"

namespace ide::start
{
	class WindowsManagersExecuter : public Manager_base
	{
	private:
		QSharedPointer<NewFileWindowManager>   nfwm_;
		QSharedPointer<LoadFileWindowsManager> lfwm_;
	public:
		explicit WindowsManagersExecuter(Parent = nullptr);
	public:
		virtual ~WindowsManagersExecuter();
	public:
		void executeNewFileWindowsManager() const;
		void executeLoadFileWindowsManager() const;
		NewFileWindowManager& getNewFileWindowManager() const;
		LoadFileWindowsManager& getLoadFileWindowManager() const;
	};
}
