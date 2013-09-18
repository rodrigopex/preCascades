#ifndef STUBSLOT_H
#define STUBSLOT_H

#include <QObject>
#include <QDebug>
class StubSlot : public QObject
{
    Q_OBJECT
public:
    explicit StubSlot(QObject *parent = 0);
    
signals:
    
public slots:
    void onNameChanged(QString name);
    
};

#endif // STUBSLOT_H
