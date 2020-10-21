#pragma once

#include <QGuiApplication>
#include <typeinfo>
#include <cxxabi.h>
#include <string>
#include <memory>



namespace global
{
	std::string demangle(const char* name);

	template <class T>
	std::string type_name(T const& type)
	{
		return demangle(typeid (type).name());
	}
}

namespace ide
{
	using namespace global;
	class IdeObject
	{
	public:
		IdeObject();
	public:
		~IdeObject();
	private:
		std::string demangle(const char* name);
	public:
		template <class T>
		std::string type_name(T const& type)
		{
			return demangle(typeid (type).name());
		}
	};

	#define function_name __PRETTY_FUNCTION__
	#define this_class_name type_name(*this)

}

void setAllAppAttributes();

