//
// Created by CHICHAOUI Omar on 26/01/2020.
//

#include "UnaryExpressionModel.h"


template <class T>
UnaryExpressionModel<T> ::UnaryExpressionModel() {}

template<class T>
T& UnaryExpressionModel<T>::evaluate() {
    if(operand != nullptr)
    {
        return evaluate(operand);
    }
}
template<class T>
T & UnaryExpressionModel<T> ::evaluate(Expression<T> *o)
{
    if(operattor != nullptr)
    {
        return operattor.evaluate(o);
    }
}
