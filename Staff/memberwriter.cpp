#include "memberwriter.h"
#include<QFile>
#include<QTextStream>


memberWriter::memberWriter()
{

}

   memberWriter::memberWriter(QString mN):memberName(mN){

 }



   void memberWriter::saveMember(staffMember&mN){



       QFile file(memberName);
       if(file.open(QIODevice::WriteOnly | QIODevice::Text)){
           QTextStream out(&file);
            out<<mN.toString();
       }
       file.close();

   }

const QString &memberWriter::getMemberName() const
{
    return memberName;
}

void memberWriter::setMemberName(const QString &newMemberName)
{
    memberName = newMemberName;
}
