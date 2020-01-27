//
// Created by CHICHAOUI Omar on 24/01/2020.
//

#ifndef FUZZY_EXPRESSION_H
#define FUZZY_EXPRESSION_H

template<class T>
class Expression {
    Expression(){};
    virtual ~Expression(){};
    virtual T evaluate() const = 0;
};


#endif //FUZZY_EXPRESSION_H
