#include "series.h"
#include <vector>
#include <iostream>


template <class T>
Series<T>::Series(const std::vector<T> &data) {
    this->elems = data;
}

template <class T>
int Series<T>::len() const {
    return elems.size();
}

template <class T>
T Series<T>::sum() const {
    T sum = elems[0];
    for(int i=1; i<elems.size(); i++) sum += elems[i];
    return sum;
}


template <class T>
Series<T>::~Series() {}
