//
//  IsSorted.hpp
//  homework-05
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef IsSorted_hpp
#define IsSorted_hpp

#include <stdio.h>

template<typename T>
bool isSorted(const T list[], int size) {
    for (int i = 0; i < size - 1; i++) {// step through the whole array
        if (list[i] > list[i + 1]) {//make sure the next element is bigger than the previous element
            return false;
        }
    }
    return true;
}

#endif /* IsSorted_hpp */
