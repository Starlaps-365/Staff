#include "memberlist.h"

memberList::memberList()
{

}
memberList::~memberList(){

    list.clear();
    qDeleteAll(list);
}


void memberList::appendMember(staffMember  l){

    list.append(l);
}
QList<staffMember> memberList::getList() const
{
    QList<staffMember> list;

    for (int count = 0; count <3; count++) {
        list.append(this->getList());
    }

    return list;
}
QString memberList::toString()const{

    QString outStr;

    for(int count=0; count<3;count++){
        outStr +=this->toString()+"\n \n";

    }
    return outStr;
}

QStringList memberList::getList2()const{
 return mlist;
}
void memberList::clear(){
    list.detach();
}
