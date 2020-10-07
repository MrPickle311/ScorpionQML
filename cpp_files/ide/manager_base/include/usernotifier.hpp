#ifndef USERNOTIFIER_H
#define USERNOTIFIER_H

#include "codesImpl.hpp"

namespace ide
{

namespace impl
{

class user_notifier_base
{
protected:
    user_notifier_base();
public:
    virtual ~user_notifier_base();
protected:
    virtual void send_to_console(std::string msg);
};

class user_notifier_independ
{
//// TUTAJ!!!
};

template <typename T>
class user_notifier_depend_Impl : public codes_names_storage_Impl<T>,
                                  public user_notifier_base
{
    using impl = codes_names_storage_Impl<T>;
protected:
    user_notifier_depend_Impl() :
        impl{}
    {}
public:
    virtual ~user_notifier_depend_Impl()
    {}
public:
    void notifyEmit(std::string func_name,T code)
    {
        std::string msg{func_name + " has emitted " +  impl::getEnumName(code)+ " code"};
        send_to_console(msg);
    }

};

class user_notifier_independ_Impl : public user_notifier_base
{
protected:
    user_notifier_independ_Impl();
public:
    virtual ~user_notifier_independ_Impl();
public:
    void notifyEmitWithoutCode(std::string func_name);
    void notifyInvoke(std::string func_name);
    void notifyFunctionSuccess(std::string func_name);
    void notifyWindowsShown(std::string func_name ,std::string window_name);
};

}

}

#endif // USERNOTIFIER_H
