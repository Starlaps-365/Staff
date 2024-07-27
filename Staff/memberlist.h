#ifndef MEMBERLIST_H
#define MEMBERLIST_H
#include "staffmember.h"
#include <QObject>


class memberList :public QObject
{
    Q_OBJECT

public:
    memberList();
    ~memberList();
    void appendMember(staffMember l);
    void clear();
    QList<staffMember> getList() const;
    QString toString() const;

    QStringList getList2()const;

signals:

    void memberText(QString);

private:
    QList<staffMember> list;

    QStringList mlist;
};

#endif // MEMBERLIST_H
