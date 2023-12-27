#include "People.h"

People::People(QObject *parent)
    : QObject{parent}
{}

void People::setWeight(const double weight)
{
    if(m_weight != weight) {
        m_weight = weight;
        emit weightChanged();
    }
}
