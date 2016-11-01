//
//  ShuffleVector.hpp
//  homework-05
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef ShuffleVector_hpp
#define ShuffleVector_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

template<typename T>
void shuffle(vector<T>& v) {
    srand(time(0));
    for (int i = 0; i < v.size(); i++) {
        int index = rand() % v.size();
        T temp = v[index];
        v[index] = v[i];
        v[i] = temp;
    }
}

#endif /* ShuffleVector_hpp */
