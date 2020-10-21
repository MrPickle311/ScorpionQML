#include "../include/MainManager.hpp"

namespace ide::main
{
	MainManager::MainManager() :
		Manager_base{},
		app_{qGuiApp},
		me_{new ManagersExecuter{this}},
		cc_{new ConnectionsCreator{*this}}
	{
		notify().constructor(function_name).success().end();
	}

	void MainManager::registerTypes()
	{
		notifyInvoke(function_name);
		me_->registerTypes();
		me_->registerEnums();
		notify().all().types().registered().end();
	}

	void MainManager::setAllAppSettings()
	{
		app_->setQuitOnLastWindowClosed(false);
		notify().with_message("all settings have been set").success().end();
	}

	QWindowList MainManager::getWindowsList()
	{
		notify().with_message("returning all windows").end();
		return this->app_->allWindows();
	}

	void MainManager::run()
	{
		notify().with_message("starting application...").end();
		registerTypes();
		cc_->createConnections();
		setAllAppSettings();
		emit applicationCreated();
		notify().with_message("application created").end();
	}

	MainManager::ConnectionsCreator::ConnectionsCreator(MainManager& mm) :
		UserNotifier{},
		mm_{mm}
	{
		notify().constructor(function_name).success().end();
	}

	void MainManager::ConnectionsCreator::createManagersExecuterConnections()
	{
		notifyInvoke(function_name);
	}

	void MainManager::ConnectionsCreator::createMainManagerConnections()
	{
		notifyInvoke(function_name);
		QObject::connect(&mm_,&MainManager::applicationCreated,
						 mm_.me_.get(),&ManagersExecuter::executeStartWindowsManager);
	}

	void MainManager::ConnectionsCreator::createConnections()
	{
		notifyInvoke(function_name);
		createMainManagerConnections();
		createManagersExecuterConnections();
		notify().with_message("connections").created().end();
	}


}


