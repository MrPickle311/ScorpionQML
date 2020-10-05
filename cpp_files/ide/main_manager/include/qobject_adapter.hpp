#ifndef QOBJECT_ADAPTER_HPP
#define QOBJECT_ADAPTER_HPP

#include <QObject>

namespace ide

{

class QObject_adapter : public QObject
{
    using Parent = QObject*;
    Q_OBJECT
public:
    explicit QObject_adapter(Parent = nullptr);
    virtual void adapt() = 0;
};

}

#endif // QOBJECT_ADAPTER_HPP
