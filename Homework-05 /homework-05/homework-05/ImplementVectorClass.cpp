//
//  ImplementVectorClass.cpp
//  homework-05
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include "ImplementVectorClass.hpp"

template<typename T>
MyVector<T>::MyVector() {
    vectorSize = 0;
}
template<typename T>
bool MyVector<T>::empty() {
    return (vectorSize == 0);
}
template<typename T>
T MyVector<T>::at(int index) {
    return elements[index];
}
template<typename T>
void MyVector<T>::push_back(T value) {
    elements[vectorSize++];
}
template<typename T>
void MyVector<T>::pop_back() {
    elements[--vectorSize];
}
template<typename T>
unsigned int MyVector<T>::size() {
    return vectorSize;
}
template<typename T>
void MyVector<T>::clear() {
    vectorSize = 0;
}
template<typename T>
void MyVector<T>::swap(MyVector v2) {
    T temp[100];
    int tempSize = v2.size();
    for (int i = 0; i < v2.size(); i++) {
        temp[i] = v2.at(i);
    }
    v2.clear();
    for (int i = 0; i < size(); i++) {
        v2.push_back(at(i));
    }
    clear();
    for (int i = 0; i < tempSize; i++) {
        push_back(temp[i]);
    }
}