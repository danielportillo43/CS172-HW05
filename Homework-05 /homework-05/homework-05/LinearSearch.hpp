//
//  LinearSearch.hpp
//  homework-05
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef LinearSearch_hpp
#define LinearSearch_hpp

#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

template <typename T>
int linearSearch(const T list[], T key, int arraySize) {
    for (int i = 0; i < arraySize; i++) {
        if (key == list[i])
            return i;
    }
    return -1;
}


#endif /* LinearSearch_hpp */
