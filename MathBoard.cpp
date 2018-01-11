#include "MathBoard.h"
#include <QSplitter>
#include <QGraphicsView>
#include <QTableWidget>
#include <QStringList>
#include <QIcon>

MathBoard::MathBoard(QWidget *parent) :
    QSplitter(parent)
{
    setWindowIcon(QIcon(":/images/images/icon.png"));

    graphicsView = new QGraphicsView();
    tableWidget = new QTableWidget();

    addWidget(tableWidget);
    addWidget(graphicsView);

    QStringList tableHorizontalHeaders;
    tableHorizontalHeaders << "Type" << "S" << "P" << "Background" << "Border" << "Parameters";
    tableWidget->setRowCount(5);
    tableWidget->setColumnCount(tableHorizontalHeaders.count());
    tableWidget->setHorizontalHeaderLabels( tableHorizontalHeaders );
}

MathBoard::~MathBoard()
{

}
