#include <QCoreApplication>
#include <QDebug>
#include <QObject>

#include "objectexample.h"
#include "stubslot.h"


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    ObjectExample obj("Test", &a);
    StubSlot * sslot = new StubSlot(&a);

    bool ok = QObject::connect(&obj, SIGNAL(nameChanged(QString)),
                     sslot, SLOT(onNameChanged(QString)));
    if(ok) {
        qDebug() << "Connected!";
    }
    obj.setName("New name");
    QObject * test = &obj;
    test->setProperty("pname", QVariant("Fulano"));
    qDebug() << obj.name();
    return a.exec();
}
