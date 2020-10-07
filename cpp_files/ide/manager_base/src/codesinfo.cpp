#include "../include/codesinfo.hpp"

namespace ide
{

namespace impl
{

codes_decl_Impl_base::codes_decl_Impl_base(QObject *parent) : QObject{parent}
{}

}

CodesInfo::CodesInfo(QObject* parent):
    Declaration{parent},
    DependImplementation<Declaration::ClosingCode>{},
    DependImplementation<Declaration::MainWindowExecuteMode>{},
    IndependImplementation{}
{
    initCodes();
}

void CodesInfo::initCodes()
{
    initClosingCodes();
    initMainWindowExecuteModeCodes();
}

void CodesInfo::initClosingCodes()
{
    add_enum_value(Declaration::ClosingCode::Exit,"Exit");
    add_enum_value(Declaration::ClosingCode::Error,"Error");
    add_enum_value(Declaration::ClosingCode::OpenMainWindow,"OpenMainWindow");
}

void CodesInfo::initMainWindowExecuteModeCodes()
{
    add_enum_value(Declaration::MainWindowExecuteMode::WithCode,"WithCode");
    add_enum_value(Declaration::MainWindowExecuteMode::WithoutCode,"WithoutCode");
}

}
