#ifndef MATHBOARD_H
#define MATHBOARD_H

#include <QSplitter>
#include <QGraphicsView>
#include <QTableWidget>

class MathBoard : public QSplitter
{
    Q_OBJECT

public:
    MathBoard(QWidget *parent = 0);
    ~MathBoard();

private:
    QGraphicsView * graphicsView;
    QGraphicsScene * graphicsScene;
    QTableWidget * tableWidget;
};

#endif // MATHBOARD_H
