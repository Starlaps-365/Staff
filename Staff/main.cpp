#include <QApplication>
#include"memberinput.h"
#include"memberwriter.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    memberInput mi;
    mi.show();

    return a.exec();
}
