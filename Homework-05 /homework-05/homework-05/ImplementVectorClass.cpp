//
//  ImplementVectorClass.cpp
//  homework-05
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "ImplementVectorClass.hpp"
template<typename T>
Vector<T>::Vector() {
    vectorSize = 0;
}

template <typename T>
Vector<T>::Vector(int size) {
    vectorSize = size;
}

template <typename T>
Vector<T>::Vector(int size, T defaultValue[size]) {
    vectorSize = size;
    for (int i = 0; i < vectorSize; i++) {
        elements[i] = defaultValue[i];
    }
}

template<typename T>
bool Vector<T>::empty() {
    if(vectorSize == 0) {
        return true;
    }
    return false;
}

template<typename T>
T Vector<T>::at(int index) {
    return elements[index];
}

template<typename T>
void Vector<T>::push_back(T value) {
    elements[vectorSize++] = value;
}

template<typename T>
void Vector<T>::pop_back() {
    if (vectorSize > 0) {
        --vectorSize;
    }
}

template<typename T>
unsigned const Vector<T>::size()
 {
    return vectorSize;
}

template<typename T>
void Vector<T>::clear() {
    vectorSize = 0;
}

template<typename T>
void Vector<T>::swap(Vector v2) {
    T temp[10000];
    int tempSize = v2.size();
    for (int i = 0; i < v2.size(); i++)
        temp[i] = v2.at(i);
    
    v2.clear();
    for (int i = 0; i < size(); i++)
        v2.push_back(at(i));
    
    clear();
    for (int i = 0; i < tempSize; i++)
        push_back(temp[i]);
}
