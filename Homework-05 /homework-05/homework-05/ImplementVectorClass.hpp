//
//  ImplementVectorClass.hpp
//  homework-05
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef ImplementVectorClass_hpp
#define ImplementVectorClass_hpp

#include <stdio.h>
#include <iostream>
template <typename T>
class Vector {

public:
    Vector();// no arg constructor
    Vector(int size);// constructor with a specified size
    Vector(int size, T defaultValue[size]);// constructor with a specified size and value
    
    void push_back(T element);// adds a new element to the vector
    void pop_back();// removes the last element from the vector
    unsigned const size();// returns the number of elements in the vector
    bool empty();// returns true if the vector has no elements
    T at(int index);// returns the element at a specific index
    void clear();// empties the arra
    void swap(Vector v2);// swaps the contents of this vector with the contents of v2
    
private:
    T elements[10000];
    int vectorSize = 0;
};

#endif /* ImplementVectorClass_hpp */
