#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "Person.h"
#include "People.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void calculateCalories();
    void weightChanged(double weight);
    void timeChanged(double time);
    void speedChanged(double speed);

signals:
    void caloryCountChanged();

private:
    Ui::Widget *ui;
    Person person;
    People m_people;

    double m_time;
    double m_speed;
    double m_caloryCount;
};

#endif // WIDGET_H
