#include "mapper.h"
#include "ui_mapper.h"

Mapper::Mapper(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Mapper)
{
    ui->setupUi(this);//UI steup
    //Timer Setup
    timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(UpdateGraphics()));
    //Scene init
    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    QBrush redBrush(Qt::red);
    QBrush blueBrush(Qt::blue);
    QPen blackPen(Qt::black);
    blackPen.setWidth(6);
    //Scene setup
    ellipse = scene->addEllipse(0,0,100,100,blackPen,redBrush);
    rect = scene->addRect(150,150,75,75,blackPen,blueBrush);
    //Timer start
    timer->start(50);


}

Mapper::~Mapper()
{
    delete ui;
}

void Mapper::on_btnReadPort_clicked()
{

}
void Mapper::UpdateGraphics()
{
    ui->graphicsView->rotate(-10);
}
