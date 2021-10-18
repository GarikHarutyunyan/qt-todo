#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void deleteItem();
    void addItem();

private:
    Ui::Widget *ui;

    int count;
    QLineEdit *lineEdit;
    QLabel *item;
    QPushButton *addButton, *deleteButton;
};
#endif // WIDGET_H
