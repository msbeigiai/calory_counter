#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "Person.h"

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

signals:

private:
    Ui::Widget *ui;

    Person person;
};

#endif // WIDGET_H
