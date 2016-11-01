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
template <typename T>
class Vector {
    T elements[100];
    int vectorSize;
    
public:
    Vector<T>();
    Vector(int size);
    Vector(int size, T defaultValue);
    void push_back(T element);
    void pop_back();
    unsigned const size();
    T const at(int index);
    bool const empty();
    void clear();
    void swap(Vector v2);
};

#endif /* ImplementVectorClass_hpp */
