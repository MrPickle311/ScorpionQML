#include "../include/CodesInfo.hpp"

namespace ide
{

	namespace impl
	{

		codes_decl_Impl_base::codes_decl_Impl_base()
		{}

		codes_decl_Impl_base::~codes_decl_Impl_base()
		{}

		codes_decl_Impl_windows::codes_decl_Impl_windows()
		{

		}

		codes_decl_Impl_windows::~codes_decl_Impl_windows()
		{

		}

	}

	namespace Codes
	{
		StartWindows::StartWindows()
		{

		}

		StartWindows::~StartWindows()
		{

		}

		MainWindows::MainWindows()
		{

		}

		MainWindows::~MainWindows()
		{

		}

	}

UserNotifier::UserNotifier():
	DependImplementation<Codes::StartWindows::ClosingCode>{},
	DependImplementation<Codes::StartWindows::MainWindowExecuteMode>{},
    IndependImplementation{}
{
    initCodes();
}

void UserNotifier::initCodes()
{
    initClosingCodes();
    initMainWindowExecuteModeCodes();
}

void UserNotifier::initClosingCodes()
{
	add_enum_value(Codes::StartWindows::ClosingCode::Exit,"Exit");
	add_enum_value(Codes::StartWindows::ClosingCode::Error,"Error");
	add_enum_value(Codes::StartWindows::ClosingCode::OpenMainWindow,"OpenMainWindow");
}

void UserNotifier::initMainWindowExecuteModeCodes()
{
	add_enum_value(Codes::StartWindows::MainWindowExecuteMode::WithCode,"WithCode");
	add_enum_value(Codes::StartWindows::MainWindowExecuteMode::WithoutCode,"WithoutCode");
}

}
