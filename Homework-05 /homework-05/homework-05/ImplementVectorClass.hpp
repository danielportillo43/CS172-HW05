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
class MyVector {
    T elements[100];
    int vectorSize;
    
public:
    MyVector();
    void push_back(T element);
    void pop_back();
    unsigned int size();
    bool empty();
    T at(int index);
    void clear();
    void swap(MyVector v2);
};

#endif /* ImplementVectorClass_hpp */
