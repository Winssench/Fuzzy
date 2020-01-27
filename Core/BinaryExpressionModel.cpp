//
// Created by CHICHAOUI Omar on 25/01/2020.
//

#include "BinaryExpressionModel.h"

template<class T>
BinaryExpressionModel<T> ::BinaryExpressionModel() {};

template<class T>
T& BinaryExpressionModel<T> :: evaluate(Expression<T> *l, Expression<T> *r)
{
    if(operattor != nullptr)
    {
        return operattor.evaluate(l,r);
    }
}

template<class T>
T& BinaryExpressionModel<T> ::evaluate()
{
    if(left  != nullptr &&  right != nullptr)
    {
        return evaluate(left,right);
    }

}