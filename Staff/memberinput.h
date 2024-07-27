#ifndef MEMBERINPUT_H
#define MEMBERINPUT_H
#include<QWidget>
#include<QString>
#include<QThread>
#include<QStringList>
#include<QBoxLayout>
#include<QListWidgetItem>
#include<QCheckBox>
#include<QLabel>
#include<QTextEdit>
#include<QLineEdit>
#include<QTableView>
#include<QDateEdit>
#include<QComboBox>
#include<QSpinBox>
//#include<QPushButton>
class QPushButton;
class QListView;

#include "staffmember.h"
#include "memberlist.h"
#include "memberwriter.h"

class memberInput :public QWidget
{
       Q_OBJECT
public:

      explicit memberInput(QWidget *parent= nullptr);

    ~memberInput();



public slots:
    void saveMember(QString sName,QDate sbDate,QString sType,QStringList sList);
    void readMemberGUI();
      void memberGUI();


private :
   // void addMember(QString sName,QDate sbDate,QString sType,QStringList sList);
      void setupGUI();
      void clearMember();


    QLabel*nameLabel;
    QLineEdit*entryName;;


    QLabel *birthDate;
    QDateEdit*entryDate;


    QLabel*staffType;
    QComboBox*contractType;

    QPushButton *btnSave;
    QPushButton*btnClose;

    QTextEdit*txtEdit;



   memberWriter*mw;
   staffMember sflist;

   memberList list;

};

#endif // MEMBERINPUT_H
