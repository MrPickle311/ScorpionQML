#include "../include/ManagersExecuter.hpp"

namespace ide::main
{
	ManagersExecuter::ManagersExecuter(QObject* parent) :
		ManagerBase{parent},
		em_{new EngineManager{parent}},
		swm_{new start::StartWindowsManager{em_->engine(),parent}},
		mwm_{new main_windows::MainWindowManager{parent}}
	{

	}

	start::StartWindowsManager& ManagersExecuter::startWindowsManager() const
	{
		return *swm_.get();
	}

	EngineManager& ManagersExecuter::engineManager()
	{
		return *em_;
	}

	ManagersExecuter::~ManagersExecuter() {}

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
		swm_->execute();
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
