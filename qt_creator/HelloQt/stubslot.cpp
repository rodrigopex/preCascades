#include "stubslot.h"

StubSlot::StubSlot(QObject *parent) :
    QObject(parent)
{
}

void StubSlot::onNameChanged(QString name) {
    qDebug() << "Name changed: " << name;
}
