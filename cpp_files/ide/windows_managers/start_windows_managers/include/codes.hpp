#ifndef CODESWRAPPER_HPP
#define CODESWRAPPER_HPP

#include "includeArea.hpp"
#include <QQmlEngine>
#include <string>
#include <map>

namespace ide
{

namespace codes_impl
{

template<class T>
class codes_Impl
{
protected:
    codes_Impl() :
        code_names_{}
    {}
private:
    std::map<T,std::string> code_names_;
public:
    void add_enum_value(T val,std::string name)
    {
        code_names_.emplace(val,name);
    }
    std::string get_enum_name(T val)
    {
        if (code_names_.find(val))
            return code_names_[val];
        else return " code not found";
    }
    void notify(std::string func_name,T code)
    {
        std::string msg{func_name + " has emitted " +  get_enum_name(code)+ " code"};
        qDebug(msg.c_str());
    }
};

class codes_decl : public QObject
{
    Q_OBJECT
public:
    explicit codes_decl(QObject* parent = nullptr);
public:
    enum class ClosingCode : int {Exit,OpenMainWindow, Error};
    Q_ENUM(ClosingCode)
    enum class MainWindowExecuteMode : int {WithoutCode, WithCode};
    Q_ENUM(MainWindowExecuteMode)
};

}

template<typename T>
using Implementation = codes_impl::codes_Impl<T>;
using Declaration = codes_impl::codes_decl;

class Codes : public Declaration,
        public Implementation<Declaration::ClosingCode>,
        public Implementation<Declaration::MainWindowExecuteMode>
{

};

}
#endif // CODESWRAPPER_HPP
