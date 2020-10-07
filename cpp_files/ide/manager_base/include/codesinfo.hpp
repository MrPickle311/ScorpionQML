#ifndef CODESWRAPPER_HPP
#define CODESWRAPPER_HPP

#include "usernotifier.hpp"

namespace ide
{

namespace impl
{
/// ten łańcuch jest paskudny , gdyby nie QObject ,to tak by to nie wyglądało
class codes_decl_Impl_base
{
    Q_GADGET
public:
    explicit codes_decl_Impl_base();
public:
    virtual ~codes_decl_Impl_base()
    {}

};

class codes_decl_Impl_windows : public virtual codes_decl_Impl_base
{
public:
    explicit codes_decl_Impl_windows();
public:
    virtual ~codes_decl_Impl_windows();
};

class codes_decl_Impl_start_window : public virtual codes_decl_Impl_windows
{
public:
    enum class ClosingCode : int {Exit,OpenMainWindow, Error};
    Q_ENUM(ClosingCode)
    enum class MainWindowExecuteMode : int {WithoutCode, WithCode};
    Q_ENUM(MainWindowExecuteMode)
};

class codes_decl_Impl_main_window : public virtual codes_decl_Impl_windows
{
public:
    explicit codes_decl_Impl_main_window(QObject* parent = nullptr);
public:
    virtual ~codes_decl_Impl_main_window();
};

class codes_decl :  public codes_decl_Impl_main_window,
                    public codes_decl_Impl_start_window
{
public:
    codes_decl();
public:
    virtual ~codes_decl();
};

}

template<typename T>
using DependImplementation = impl::user_notifier_depend_Impl<T>;
using Declaration = impl::codes_decl;
using IndependImplementation  = impl::user_notifier_independ_Impl;

class CodesInfo : public Declaration,
              public DependImplementation<Declaration::ClosingCode>,
              public DependImplementation<Declaration::MainWindowExecuteMode>,
              public IndependImplementation
 {
    using Parent = QObject*;
public:
    CodesInfo(Parent);
public:
    virtual ~CodesInfo()
    {}
private:
    void initCodes();
    void initClosingCodes();
    void initMainWindowExecuteModeCodes();
private:
    using DependImplementation<Declaration::MainWindowExecuteMode>::add_enum_value;
    using DependImplementation<Declaration::ClosingCode>::add_enum_value;
public:///codes_names_storage_Impl
    using DependImplementation<Declaration::MainWindowExecuteMode>::getEnumName;
    using DependImplementation<Declaration::ClosingCode>::getEnumName;
public:///user_notifier_Impl
    using DependImplementation<Declaration::MainWindowExecuteMode>::notifyEmit;
    using DependImplementation<Declaration::ClosingCode>::notifyEmit;
};

using BasicCodes = impl::codes_decl_Impl_base;
using MainWindowCodes = impl::codes_decl_Impl_main_window;
using StartWindowCodes = impl::codes_decl_Impl_start_window;

}
#endif // CODESWRAPPER_HPP
