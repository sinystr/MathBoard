#include "MathBoard.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MathBoard mathBoard;
    mathBoard.resize(1500, 500);
    mathBoard.show();

    return a.exec();
}
