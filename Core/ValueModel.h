//
// Created by CHICHAOUI Omar on 25/01/2020.
//

#ifndef FUZZY_VALUEMODEL_H
#define FUZZY_VALUEMODEL_H

#include "Expression.h"

template<class T>
class ValueModel  {
private :
    T value;
    Expression<T> expression;
public :
    ValueModel();
    ~ValueModel();
    T evaluate();
    void setValue(const T& value);
};


#endif //FUZZY_VALUEMODEL_H
