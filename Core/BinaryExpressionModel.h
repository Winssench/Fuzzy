//
// Created by CHICHAOUI Omar on 25/01/2020.
//

#ifndef FUZZY_BINARYEXPRESSIONMODEL_H
#define FUZZY_BINARYEXPRESSIONMODEL_H

#include "BinaryExpression.h"
#include "Expression.h"

template<class T>
class BinaryExpressionModel : public BinaryExpression<T> {
public :
    BinaryExpressionModel();
    ~BinaryExpressionModel();
    T& evaluate();
    T& evaluate(Expression<T>*l ,Expression<T>*r );

private:
    BinaryExpression<T> operattor ;
    Expression<T> left;
    Expression<T> right;



};
#endif //FUZZY_BINARYEXPRESSIONMODEL_H
