#include "Widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // connect(ui->pushButton, &QPushButton::clicked, this, [=](){
    //     ui->outputLabel->setText(person.sayHello());
    // });
    m_people.setWeight(ui->weightSpinBox->value());
    m_time = ui->timeSpinBox->value();
    m_speed = ui->speedSpinBox->value();

    connect(ui->weightSpinBox, &QDoubleSpinBox::valueChanged, this, &Widget::weightChanged);
    connect(ui->timeSpinBox, &QDoubleSpinBox::valueChanged, this, &Widget::timeChanged);
    connect(ui->speedSpinBox, &QDoubleSpinBox::valueChanged, this, &Widget::speedChanged);

    connect(this, &Widget::caloryCountChanged, this, [=](){
        ui->caloryLabel->setText(QString::number(m_caloryCount));
    });

    calculateCalories();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::calculateCalories()
{
    m_caloryCount = ((0.0215 * (m_speed * m_speed * m_speed)) - (0.1765 *(m_speed * m_speed)) +
                     (0.8710 * m_speed) + 1.4577) * m_people.getWeight() * m_time;
    emit caloryCountChanged();
}

void Widget::weightChanged(double weight)
{
    m_people.setWeight(weight);
    calculateCalories();
}

void Widget::timeChanged(double time)
{
    m_time = time;
    calculateCalories();
}

void Widget::speedChanged(double speed)
{
    m_speed = speed;
    calculateCalories();
}
