//
// Created by CHICHAOUI Omar on 24/01/2020.
//

#ifndef FUZZY_UNARYEXPRESSION_H
#define FUZZY_UNARYEXPRESSION_H

#include "Expression.h"

template<class  T>
class UnaryExpression :  public Expression<T>{
    UnaryExpression();
    virtual ~UnaryExpression();
    virtual T evaluate(Expression<T>* o) = 0;
};


#endif //FUZZY_UNARYEXPRESSION_H
