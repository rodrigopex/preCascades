#include "objectexample.h"

ObjectExample::ObjectExample(QString name, QObject *parent) :
    QObject(parent)
{
    m_name = name;
}

QString ObjectExample::ObjectExample::name() {
    return m_name;
}

void ObjectExample::setName(QString name) {
    if(this->m_name != name) {
        this->m_name = name;
        emit this->nameChanged(name);
    }
}
