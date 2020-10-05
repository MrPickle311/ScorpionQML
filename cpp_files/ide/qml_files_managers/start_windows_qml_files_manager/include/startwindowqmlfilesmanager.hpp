#ifndef STARTWINDOWQMLFILESMANAGER_HPP
#define STARTWINDOWQMLFILESMANAGER_HPP

#include <QUrl>

namespace ide
{

class StartWindowQmlFilesManager
{
private:
    QUrl const startWindowUrl;
private:
    StartWindowQmlFilesManager();
public:
    static StartWindowQmlFilesManager& get();
    QUrl getStartWindowUrl() const;
};

}
#endif // STARTWINDOWQMLFILESMANAGER_HPP
