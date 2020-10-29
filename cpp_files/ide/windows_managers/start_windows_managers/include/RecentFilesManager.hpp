#pragma once

#include "IncludeArea.hpp"

namespace ide::start
{
	class RecentFilesManager : public Manager_base
	{
	public:
		explicit RecentFilesManager(Parent = nullptr);
	public:
		virtual ~RecentFilesManager();
	public:
		void execute();
	};
}
