#ifndef MEMBERWRITER_H
#define MEMBERWRITER_H
#include "staffmember.h"


class memberWriter
{
public:

    // Constructor
    memberWriter();

     memberWriter(QString mN);

     //to save a Film
     void saveMember(staffMember &mN);

     const QString &getMemberName() const;
     void setMemberName(const QString &newMemberName);

private:
     // member name

     QString memberName;

};

#endif // MEMBERWRITER_H
