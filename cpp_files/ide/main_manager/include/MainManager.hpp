#pragma once

#pragma once

#include "includeArea.hpp"
#include "ManagersExecuter.hpp"

namespace ide::main
{
	class MainManager : public ManagerBase
	{
		friend class ConnectionsCreator;
		using Parent = QObject*;
		Q_OBJECT
	private:
		QGuiApplication* app_;
		QSharedPointer<ManagersExecuter> me_;
	private:
		class ConnectionsCreator : public UserNotifier
		{
		public:
			ConnectionsCreator(MainManager&);
		private:
			MainManager& mm_;
		private:
			void createManagersExecuterConnections();
						void createMainManagerConnections();
						void createStartWindowsManagerConnections();
		public:
						void createConnections();
		};
		QSharedPointer<ConnectionsCreator> cc_;
	public:
				explicit MainManager();		// dodaj once_flag do konstruktora
				void run();
				void closeApplication(start::Codes::ClosingCode);
	private:
		void setAllAppSettings();
		QWindowList getWindowsList();
		void registerTypes();
	public:
		MainManager& operator= (MainManager&) = delete;
		void operator= (MainManager&&) = delete;
	signals:
		void applicationCreated();
	};
}
