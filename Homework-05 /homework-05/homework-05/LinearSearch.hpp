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
    for (int i = 0; i < arraySize; i++) {//step through the whole array
        if (key == list[i])//compare each element with the key
            return i;//return the index of the matching element
    }
    return -1;//no matching elements
}


#endif /* LinearSearch_hpp */
