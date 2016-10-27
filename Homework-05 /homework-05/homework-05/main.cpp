//
//  main.cpp
//  homework-05
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include <iostream>
#include "LinearSearch.hpp"
#include "IsSorted.hpp"
#include "ImplementVectorClass.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    MyVector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    
    MyVector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    
    v1.swap(v2);
    
    for (int i = 0; i < v1.size(); i++)
        cout << v1.at(i) << " ";
    
    
    return 7;
}
