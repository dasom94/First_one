#include <QApplication>
#include <QGraphicsScene>
#include "myrect.h"
#include <QGraphicsView>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QGraphicsScene * scene = new QGraphicsScene();
    MyRect * rect = new MyRect ();
    rect->setRect(0,0,64,64);
    scene->addItem(rect);

    rect->setFlag(QGraphicsItem::ItemIsFocusable);
    rect->setFocus();
    QGraphicsView * view = new QGraphicsView(scene);
    view->show();

    return a.exec();
}
