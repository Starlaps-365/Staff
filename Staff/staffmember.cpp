#include "staffmember.h"
#include<QString>

staffMember::staffMember()
{

}


void staffMember::setStaffList(const QStringList &newStaffList)
{
    staffList = newStaffList;


}
void staffMember::setStaffName(const QString &newStaffName){
    staffName=newStaffName;
}
void staffMember::setBirthDate(const QDate &newBirthDate)
{
    birthDate = newBirthDate;


}

const QStringList &staffMember::getStaffList() const
{
    return staffList;
}

const QString &staffMember::getStaffName() const
{
    return staffName;
}
const QDate&staffMember::getBirthDate()const{
    return birthDate;
}



void staffMember::setMember(QString sN,QDate bB,QString t,QStringList sL){
    staffName=sN;
    birthDate=bB;
    getStaffList();

     Type=staffMember::memberType(sL.indexOf(t));

}
staffMember::staffMember(QString sN,QDate bB,QString t,QStringList sL){

    staffName=sN;
    birthDate=bB;
     getStaffList();

     Type=staffMember::memberType(sL.indexOf(t));

}

    QString staffMember::toString()const{



    QString keyString=QString("staffName:%1,birthDate:%2:%3")
            .arg(staffName,birthDate.toString(),staffList.first());


    return keyString;
}
