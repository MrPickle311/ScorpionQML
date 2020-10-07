#include "../include/usernotifier.hpp"

namespace ide
{

namespace impl
{

user_notifier_base::user_notifier_base()
{}

user_notifier_base::~user_notifier_base()
{}

void user_notifier_base::send_to_console(std::string msg)
{
    qDebug(msg.c_str());
}

user_notifier_independ_Impl::user_notifier_independ_Impl() :
    user_notifier_base{}
{

}

void user_notifier_independ_Impl::notifyEmitWithoutCode(std::string func_name)
{
    std::string msg{func_name + " has emitted without code"};
    send_to_console(msg);
}

void user_notifier_independ_Impl::notifyInvoke(std::string func_name)
{
    std::string msg{func_name + " has been invoked"};
    send_to_console(msg);
}

void user_notifier_independ_Impl::notifyFunctionSuccess(std::string func_name)
{
    std::string msg {func_name + " has been executed properly"};
    send_to_console(msg);
}

void user_notifier_independ_Impl::notifyWindowsShown(std::string func_name, std::string window_name)
{
    std::string msg {window_name + " has been shown properly in function : " + func_name};
    send_to_console(msg);
}

}
}
