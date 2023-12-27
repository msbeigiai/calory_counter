#ifndef PEOPLE_H
#define PEOPLE_H

#include <QObject>

class People : public QObject
{
    Q_OBJECT
public:
    explicit People(QObject *parent = nullptr);
    double getWeight() const {return m_weight;};
    void setWeight(const double weight);

signals:
    void weightChanged();
private:
    double m_weight = 0.0;

};

#endif // PEOPLE_H
