#include "../include/NewFileWindowManager.hpp"

//#include <QQuickWindow>

#include <QQuickWindow>

namespace ide::start
{
	NewFileWindowManager::NewFileWindowManager(QQmlApplicationEngine& engine, Parent parent) :
		StartWindowsManagerBase{engine,parent}
	{

	}

	NewFileWindowManager::~NewFileWindowManager()
	{

	}

	void NewFileWindowManager::execute()
	{
		engine().load(StartWindowQmlFilesManager::get().getNewFileWindowUrl());
		if(!engine().rootObjects().isEmpty())
		{
			QQuickWindow* a  = qobject_cast<QQuickWindow*>(engine().rootObjects().last());
			if(a == nullptr)
				qDebug("ERROR!");
			else qDebug("It works!");
			//	//a->setEnabled(false);
		}

	}
}

