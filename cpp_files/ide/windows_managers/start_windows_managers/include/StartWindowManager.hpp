#pragma once

#include "IncludeArea.hpp"
#include "ButtonsCollumnManager.hpp"
#include "RecentFilesManager.hpp"
#include "NewFileWindowManager.hpp"
#include "LoadFileWindowsManager.hpp"
#include "ManagersExecuter.hpp"

namespace ide
{
	namespace start
	{

		/// PRZENIEŚ FUNKCJE ODPALAJĄCE MANAGERÓW DO MANAGERSeXECUTEER
		///
		///
		///
		class StartWindowsManager : public StartWindowsManagerBase
		{
			Q_OBJECT
			friend class ConnectionsCreator;
			using self = StartWindowsManager&;
		public slots:
			void close(Codes::ClosingCode);
			void executeNewFileWindowsManager();
			void executeLoadFileWindowsManager();
		private:
			QSharedPointer<ButtonsCollumnManager>  bcm_;
			QSharedPointer<RecentFilesManager>	   rfm_;
			QSharedPointer<NewFileWindowManager>   nfwm_;
			QSharedPointer<LoadFileWindowsManager> lfwm_;
			QSharedPointer<ManagersExecuter>	   me_;
		private:
			class ConnectionsCreator : public UserNotifier
			{
			public:
				ConnectionsCreator(StartWindowsManager&);
				virtual ~ConnectionsCreator();
			private:
				StartWindowsManager& swm_;
			public:
				void createConnections();
			private:
				void createButtonsManagerConnections();
				void createRecentFilesManagerConnections();
				void createNewFileWindowManagerConnections();
				void createLoadFileWindowsManagerConnections();
			};
		private:
			QSharedPointer<ConnectionsCreator> cc_;
		public:
			explicit StartWindowsManager(Parent = nullptr);
		public:
			virtual ~StartWindowsManager();
		private:
			void executeStartWindow();
			void executeConnectionsCreator();
		public:
			void runStartWindowsManager();
			void registerTypes();
			void registerEnums();
		signals:
			// klasa ta wysyła sygnały do MainManager ,po wybraniu opcji przez klienta
			void closing(Codes::ClosingCode);
			void runMainWindowManager();

		};



	}
}
