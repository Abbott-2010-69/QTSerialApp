#ifndef MAPPER_H
#define MAPPER_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QPainter>
#include <QGraphicsScene>
#include <QTimer>

namespace Ui {
class Mapper;
}

class Mapper : public QMainWindow
{
    Q_OBJECT

public:
    explicit Mapper(QWidget *parent = 0);
    ~Mapper();

private slots:
    void on_btnReadPort_clicked();

private:
    Ui::Mapper *ui;
    QGraphicsScene *scene;
    QGraphicsRectItem *rect;
    QGraphicsEllipseItem *ellipse;
    QTimer *timer;

public slots:
    void UpdateGraphics();

};

#endif // MAPPER_H
