#include "MathBoard.h"
#include <QSplitter>
#include <QGraphicsView>
#include <QTableWidget>
#include <QStringList>
#include <QIcon>
#include <QGraphicsItem>

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

    graphicsScene = new QGraphicsScene();
    graphicsScene->setSceneRect(0,0,340,1000);
    graphicsView->setRenderHints(QPainter::Antialiasing | QPainter::SmoothPixmapTransform | QPainter::HighQualityAntialiasing);
    graphicsView->setScene(graphicsScene);

    QGraphicsEllipseItem * ellipseItem = graphicsScene->addEllipse(0,0,130,130, QPen(), QBrush(Qt::red));
    QGraphicsEllipseItem * ellipseItem2 = graphicsScene->addEllipse(0,0,130,130, QPen(), QBrush(Qt::blue));
    ellipseItem->setFlag(QGraphicsItem::ItemIsMovable, true);
    ellipseItem2->setFlag(QGraphicsItem::ItemIsMovable, true);
}

MathBoard::~MathBoard()
{

}
