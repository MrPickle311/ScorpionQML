#ifndef NONQTACTIONSWRAPPER_HPP
#define NONQTACTIONSWRAPPER_HPP

#include <QObject>

class NonQtActionsWrapper : public QObject
{
    Q_OBJECT
public:
    explicit NonQtActionsWrapper(QObject *parent = nullptr);

signals:

};

#endif // NONQTACTIONSWRAPPER_HPP
