#include "../include/WindowsManagersExecuter.hpp"

namespace ide::start
{

	NewFileWindowManager& WindowsManagersExecuter::getNewFileWindowManager() const
	{
		return *nfwm_;
	}


	LoadFileWindowsManager& WindowsManagersExecuter::getLoadFileWindowManager() const
	{
		return *lfwm_;
	}


	WindowsManagersExecuter::WindowsManagersExecuter(Parent parent):
		Manager_base{parent},
		nfwm_{new NewFileWindowManager{parent}},
		lfwm_{new LoadFileWindowsManager{parent}}
	{
		notify().constructor(type_name(this)).invoked().success().end();
	}

	WindowsManagersExecuter::~WindowsManagersExecuter()
	{

	}

	void WindowsManagersExecuter::executeNewFileWindowsManager() const
	{
		notifyInvoke(function_name);
		nfwm_->execute();
	}

	void WindowsManagersExecuter::executeLoadFileWindowsManager() const
	{
		notifyInvoke(function_name);
		lfwm_->execute();
	}



}
