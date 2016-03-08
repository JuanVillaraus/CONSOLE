#include "siviso.h"
#include "FrmPortable.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //siviso w;
    FrmPortable w;

    w.m_pApplication = &a;
            w.changeStyleSheet(DAY_STYLE);

    w.show();

    return a.exec();
}
