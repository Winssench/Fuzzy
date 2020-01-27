//
// Created by CHICHAOUI Omar on 25/01/2020.
//

#ifndef FUZZY_BINARYEXPRESSION_H
#define FUZZY_BINARYEXPRESSION_H

#include "Expression.h"

template<class  T>
class BinaryExpression : public Expression<T>{
         BinaryExpression;
         ~BinaryExpression();
         virtual T& evaluate(Expression<T>* l, Expression<T>* r) = 0;

};


#endif //FUZZY_BINARYEXPRESSION_H
