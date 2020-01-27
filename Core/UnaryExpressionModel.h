//
// Created by CHICHAOUI Omar on 26/01/2020.
//

#ifndef FUZZY_UNARYEXPRESSIONMODEL_H
#define FUZZY_UNARYEXPRESSIONMODEL_H

#include "UnaryExpression.h"

template<class T>
class UnaryExpressionModel : UnaryExpression<T>{
public:
    UnaryExpressionModel();
    ~UnaryExpressionModel();
    T& evaluate();
    T& evaluate(Expression<T> *o);


private:
    UnaryExpression<T> operattor;
    Expression<T> operand;

};


#endif //FUZZY_UNARYEXPRESSIONMODEL_H
