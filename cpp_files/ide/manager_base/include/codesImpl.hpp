#ifndef CODESIMPL_HPP
#define CODESIMPL_HPP

#include "includeArea.hpp"

namespace ide
{

#define function_name __PRETTY_FUNCTION__

namespace impl
{

template<typename T>
class codes_names_storage_Impl
{
protected:
    codes_names_storage_Impl() :
        code_names_{}
    {}
public:
    virtual ~codes_names_storage_Impl()
    {}
private:
    std::map<T,std::string> code_names_;
public:
    void add_enum_value(T val,std::string name)
    {
        code_names_.emplace(val,name);
    }
    std::string getEnumName(T val)
    {
        if (code_names_.find(val) != code_names_.end())
            return code_names_[val];
        else return " CODE NOT FOUND";
    }

};


}

}

#endif // CODESIMPL_HPP
