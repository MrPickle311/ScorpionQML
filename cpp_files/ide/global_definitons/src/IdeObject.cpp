#include "../include/IdeObject.hpp"

void setAllAppAttributes()
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QCoreApplication::setAttribute(Qt::AA_DontUseNativeMenuBar);
    qDebug("All attributes have been set");
}


namespace global
{
	/// nie moja implementacja , ale ciekawa
	std::string demangle(const char* name)
	{
		int status = -4; // some arbitrary value to eliminate the compiler warning

		// enable c++11 by passing the flag -std=c++11 to g++
		std::unique_ptr<char, void(*)(void*)> res {
			abi::__cxa_demangle(name, NULL, NULL, &status),
					std::free
		};

		return (status==0) ? res.get() : name ;
	}
}


ide::IdeObject::IdeObject()
{

}

ide::IdeObject::~IdeObject()
{

}

std::string ide::IdeObject::demangle(const char* name)
{
	int status = -4; // some arbitrary value to eliminate the compiler warning

	// enable c++11 by passing the flag -std=c++11 to g++
	std::unique_ptr<char, void(*)(void*)> res {
		abi::__cxa_demangle(name, NULL, NULL, &status),
				std::free
	};

	return (status==0) ? res.get() : name ;
}
