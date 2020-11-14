#include "../include/MainManager.hpp"

namespace ide::main
{
	MainManager::MainManager() :
		ManagerBase{},
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

	void MainManager::closeApplication(start::Codes::ClosingCode code)
	{
		notifyInvoke(function_name);
		switch (code)
		{
		case start::Codes::ClosingCode::Exit:
			emit me_->engineManager().engine().quit();
			break;
		case start::Codes::ClosingCode::Error:
			emit me_->engineManager().engine().exit(1);
			break;
		default:
			notify().with_message("Unexpected behaviour!").end();
		}
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
		QObject::connect(&mm_.me_->engineManager().engine(),&QQmlApplicationEngine::quit,
						 &QGuiApplication::quit);

	}

	void MainManager::ConnectionsCreator::createStartWindowsManagerConnections()
	{
		notifyInvoke(function_name);
		QObject::connect(&mm_.me_->startWindowsManager(),&start::StartWindowsManager::closing,
						 &mm_,&MainManager::closeApplication);
		notify().function(function_name).invoked().success().end();
	}

	void MainManager::ConnectionsCreator::createConnections()
	{
		notifyInvoke(function_name);
		createMainManagerConnections();
		createManagersExecuterConnections();
		createStartWindowsManagerConnections();
		notify().with_message("connections").created().end();
	}


}


