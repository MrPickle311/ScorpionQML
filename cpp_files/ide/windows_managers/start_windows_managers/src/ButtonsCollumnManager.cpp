#include "../include/ButtonsCollumnManager.hpp"

namespace ide
{
	namespace start
	{
		ButtonsCollumnManager::ButtonsCollumnManager([[maybe_unused]] Parent parent) :
			Manager_base{parent}
		{
			notify().constructor(type_name(*this)).executed().success();
		}

		ButtonsCollumnManager::~ButtonsCollumnManager()
		{

		}

		void ButtonsCollumnManager::startNewFileWindow()
		{
			emit executeNewFileWindowsManager();
			notifyInvoke(function_name);
		}

		void ButtonsCollumnManager::startMainWindow(Codes::MainWindowExecuteMode const mode_)
		{
			notifyInvoke(function_name);
			using mode = Codes::MainWindowExecuteMode ;
			switch (mode_)
			{
				case mode::WithCode:
				notifyEmit(function_name,mode_);
				emit executeLoadFileWindowsManager();
				break;
				case mode::WithoutCode:
				notifyEmit(function_name,mode_);
				emit closing(Codes::ClosingCode::OpenMainWindow);
				emit executeMainWindowsManager();
				//oczekuj na ewentualne zamknięcie okna
				break;
			}
		}

		void ButtonsCollumnManager::exit()
		{
			notifyInvoke(function_name);
			notifyEmitWithoutCode(function_name);
			emit closing(Codes::ClosingCode::Exit);
		}
	}
}
