//
// Created by CHICHAOUI Omar on 25/01/2020.
//

#include "ValueModel.h"

template<class T>
ValueModel<T>::ValueModel() {}

template<class T>
ValueModel<T>::~ValueModel() {}

template<class T>
T ValueModel<T>::evaluate() {
    this->expression.evaluate();
}

template <class T>
void ValueModel<T>::setValue(const T& _value) {
    this->value = _value;
}
