#pragma once

#include "IncludeArea.hpp"
#include "ButtonsCollumnManager.hpp"
#include "RecentFilesManager.hpp"
#include "WindowsManagersExecuter.hpp"

namespace ide::start
{
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
		QSharedPointer<WindowsManagersExecuter>	   wme_;
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
			void createStartWindowsManagerConnections();
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
		void execute();
		void registerTypes();
		void registerEnums();
	signals:
		// klasa ta wysyła sygnały do MainManager ,po wybraniu opcji przez klienta
		void closing(Codes::ClosingCode);
		void runMainWindowManager();

	};
}
