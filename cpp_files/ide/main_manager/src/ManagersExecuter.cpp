#include "../include/ManagersExecuter.hpp"

namespace ide::main
{
	ManagersExecuter::ManagersExecuter(QObject* parent) :
		Manager_base{parent},
		swm_{new start::StartWindowsManager{parent}},
		mwm_{new MainWindowManager{parent}}
	{

	}

	void ManagersExecuter::registerTypes()
	{
		swm_->registerTypes();
	}

	void ManagersExecuter::registerEnums()
	{
		swm_->registerEnums();
	}

	void ManagersExecuter::executeStartWindowsManager()
	{
		swm_->runStartWindowsManager();
		emit startWindowsManagerExecuted();
	}

	void ManagersExecuter::executeMainWindowsManager()
	{
		// połącz sygnały z notifyEmitWithoutCode() zamiast bezpośrednio wywoływać tę funkcję
		// przed sygnałem
		notifyEmitWithoutCode(function_name);
		emit mainWindowsManagerExecuted();
	}
}
