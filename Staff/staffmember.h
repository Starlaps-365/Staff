#ifndef STAFFMEMBER_H
#define STAFFMEMBER_H
#include <QStringList>
#include <QDate>
#include <QString>
#include<QMetaEnum>
#include<QMetaObject>


class staffMember :public QObject
{
        Q_OBJECT

public:

     enum  class memberType{Permanent,PartTime,Contract};
     Q_ENUM(memberType);


    staffMember();
    staffMember(QString sN,QDate bB,QString t,QStringList sL);

    void setMember(QString sN,QDate bB,QString t,QStringList sL);
    QString toString()const;


   void setStaffName(const QString &newStaffName);

    void setStaffList(const QStringList &newStaffList);

    void setBirthDate(const QDate &newBirthDate);

    const QStringList &getStaffList() const;

    const QString &getStaffName() const;
    const QDate & getBirthDate()const;


private:

    QStringList staffList;
    QString staffName;
    QDate  birthDate;
    memberType Type;

};

#endif // STAFFMEMBER_H
