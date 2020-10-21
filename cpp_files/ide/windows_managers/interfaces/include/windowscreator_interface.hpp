#ifndef WINDOWSCREATOR_BASE_HPP
#define WINDOWSCREATOR_BASE_HPP
#include <QObject>

//builder
class WindowsCreator_interface
{
    using self  = WindowsCreator_interface&;
public:
    void create_window(QUrl const);
    self set_window_property(char* const,QVariant const&);
};

#endif // WINDOWSCREATOR_BASE_HPP
