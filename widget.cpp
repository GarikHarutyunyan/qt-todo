#include "widget.h"
#include "ui_widget.h"
#include <QLineEdit>
#include <QLabel>
#include <QString>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    count = 0;
    this->setWindowTitle("ToDo List");

    lineEdit = new QLineEdit(this);
    lineEdit->setGeometry(0,0,300,50);

    addButton = new QPushButton(this);
    addButton->setGeometry(300,0,100,50);
    addButton->setText("Add");
    connect(addButton,SIGNAL(clicked()),this,SLOT(addItem()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::addItem(){
    count++;
    QString labelText;
    labelText = lineEdit->text();

    item = new QLabel(this);
    item->setText(labelText);
    item->setGeometry(25,20+count*35,100,50);
    item->show();

}
void Widget::deleteItem(){}

