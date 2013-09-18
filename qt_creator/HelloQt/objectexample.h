#ifndef OBJECTEXAMPLE_H
#define OBJECTEXAMPLE_H

#include <QObject>
#include <QString>
#include <QVariant>
#include <QList>
#include <QMap>

class ObjectExample : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString pname READ name WRITE setName NOTIFY nameChanged)
public:
    explicit ObjectExample(QString name, QObject *parent = 0);
    QString name();
    void setName(QString name);
signals:
    void nameChanged(QString name);
public slots:
private:
    QString m_name;
    QVariant m_var;
};

#endif // OBJECTEXAMPLE_H
