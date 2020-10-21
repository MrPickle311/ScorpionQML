#pragma once

#include <QUrl>

namespace ide
{

class StartWindowQmlFilesManager
{
private:
	QString const mainDirectory;
    QUrl const startWindowUrl;
	QUrl const loadWindowUrl;
	QUrl const newFileWindowUrl;
private:
    StartWindowQmlFilesManager();
public:
    static StartWindowQmlFilesManager& get();
    QUrl getStartWindowUrl() const;
	QUrl getLoadWindowUrl() const;
	QUrl getNewFileWindowUrl() const;
};

}
