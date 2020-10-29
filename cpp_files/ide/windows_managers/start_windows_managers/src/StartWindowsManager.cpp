#include "../include/StartWindowManager.hpp"

namespace ide::start
{
	StartWindowsManager::StartWindowsManager(Parent parent) :
		StartWindowsManagerBase{parent},
		bcm_{new ButtonsCollumnManager{parent}},
		rfm_{new RecentFilesManager{parent}},
		wme_{new WindowsManagersExecuter{parent}},
		cc_{new ConnectionsCreator{*this}}
	{
		executeConnectionsCreator();
		notify().constructor(type_name(*this)).executed().success();
	}

	void StartWindowsManager::registerTypes()
	{
		engine().rootContext()->setContextProperty("ButtonsCollumnManager",bcm_.get());
	}

	void StartWindowsManager::registerEnums()
	{
		qRegisterMetaType<Codes::MainWindowExecuteMode>("Codes::MainWindowExecuteMode");
		qRegisterMetaType<Codes::ClosingCode>("Codes::ClosingCode");
		qmlRegisterUncreatableType<Codes>("codes.windows.startwindows",1,0,"Codes","This is only code class");
		qDebug("StartWindowsManager has registered enums properly");
	}
	/// OGARNIJ TO
	///
	///
	/// !!!!!!!!!!
	void StartWindowsManager::close(Codes::ClosingCode code)
	{
		notifyEmit(function_name,code);
		emit closing(code);
	}

	void StartWindowsManager::executeNewFileWindowsManager()
	{
		wme_->executeNewFileWindowsManager();
	}

	void StartWindowsManager::executeLoadFileWindowsManager()
	{
		wme_->executeLoadFileWindowsManager();
	}

	StartWindowsManager::~StartWindowsManager()
	{

	}

	void StartWindowsManager::executeStartWindow()
	{
		notify().object(type_name(*this)).executed().end();
		engine().load(StartWindowQmlFilesManager::get().getStartWindowUrl());
		notify().window("StartWindow").shown().success().end();
	}

	void StartWindowsManager::executeConnectionsCreator()
	{
		notifyInvoke(function_name);
		cc_->createConnections();
		notify().function(function_name).success();
	}

	StartWindowsManager::ConnectionsCreator::ConnectionsCreator(StartWindowsManager& swm):
		UserNotifier{},
		swm_{swm}
	{

	}

	StartWindowsManager::ConnectionsCreator::~ConnectionsCreator()
	{

	}

	void StartWindowsManager::ConnectionsCreator::createConnections()
	{
		createStartWindowsManagerConnections();
		createButtonsManagerConnections();
		createLoadFileWindowsManagerConnections();
		createNewFileWindowManagerConnections();
		createRecentFilesManagerConnections();
	}

	void StartWindowsManager::ConnectionsCreator::createStartWindowsManagerConnections()
	{

	}

	void StartWindowsManager::ConnectionsCreator::createButtonsManagerConnections()
	{
		QObject::connect(swm_.bcm_.get(),&ButtonsCollumnManager::executeLoadFileWindowsManager,
						 &swm_,&StartWindowsManager::executeLoadFileWindowsManager);
		QObject::connect(swm_.bcm_.get(),&ButtonsCollumnManager::executeNewFileWindowsManager,
						 &swm_,&StartWindowsManager::executeNewFileWindowsManager);
	}

	void StartWindowsManager::ConnectionsCreator::createRecentFilesManagerConnections()
	{

	}

	void StartWindowsManager::ConnectionsCreator::createNewFileWindowManagerConnections()
	{

	}

	void StartWindowsManager::ConnectionsCreator::createLoadFileWindowsManagerConnections()
	{

	}

	void StartWindowsManager::execute()
	{
		executeStartWindow();
		qDebug("StartWindowsManager has been properly executed");
	}
}
