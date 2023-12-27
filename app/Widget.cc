#include "Widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget{parent}
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // connect(ui->pushButton, &QPushButton::clicked, this, [=](){
    //     ui->outputLabel->setText(person.sayHello());
    // });
}
