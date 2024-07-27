#include "memberinput.h"
#include<QGridLayout>
#include<QFormLayout>
#include<QHBoxLayout>
#include<QPushButton>

#include<QVBoxLayout>
#include<QLabel>
#include<QMessageBox>


memberInput::memberInput(QWidget*parent):QWidget{parent},
    nameLabel{new QLabel("Staff Member Name")}
  ,entryName{new QLineEdit()},birthDate{new QLabel("Staff Member BirthDate")}
  ,entryDate(new QDateEdit(QDate::currentDate()))
  ,staffType{new QLabel("Choose Type of Contract")}
  ,contractType{new QComboBox()},btnSave{new QPushButton("Save")}
  ,btnClose{new QPushButton("Close")},txtEdit(new QTextEdit())

{

    setupGUI();

    connect(btnSave,SIGNAL(clicked()),this,SLOT(readMemberGUI()));


    connect(btnClose,&QPushButton::clicked,this,&QWidget::close);


}

memberInput::~memberInput()
{


}



void memberInput::saveMember(QString sName,QDate sbDate,QString sType,QStringList sList ){

     staffMember sM(sName,sbDate,sType,sList);
      QMessageBox::information(this,"Staff Member information", "Staff member detail saved to file");
}
void memberInput::readMemberGUI(){



   QString  sN=entryName->text();
     QDate dbD=entryDate->date();
     QString sT=contractType->currentText();
     QStringList sL=sflist.getStaffList();

     if(!sN.isEmpty() && !dbD.isNull() && !sT.isEmpty()){

           saveMember(sN,dbD,sT,sL);
            clearMember();
     }else{

         QMessageBox::information(this,"Staff information","Enter all the necessary information");
     }


}



void memberInput::memberGUI(){

    list.getList();
    QThread*thread=new QThread();
    list.moveToThread(thread);



}

void memberInput::setupGUI(){

    setWindowTitle("\t \t Staff Members Info");
    mw=new memberWriter("Staff members.txt");
    //memberGUI();
    contractType->addItem("Contract");
    contractType->addItem("Part-time");
    contractType->addItem("Permanant");


    QVBoxLayout*layout { new QVBoxLayout(this)};

    layout->addWidget(nameLabel);
    layout->addWidget(entryName);

    layout->addWidget(birthDate);
    layout->addWidget(entryDate);

    layout->addWidget(staffType);
    layout->addWidget(contractType);
    layout->addWidget(txtEdit);

    layout->addWidget(btnSave);
    layout->addWidget(btnClose);

    this->setLayout(layout);
}
void memberInput::clearMember(){
  nameLabel->clear();
  entryName->clear();
  entryDate->setDate(QDate::currentDate());
  contractType->currentIndex();

}
