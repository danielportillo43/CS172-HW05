//
//  main.cpp
//  homework-05
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <stack>
#include "LinearSearch.hpp"
#include "IsSorted.hpp"
#include "ImplementVectorClass.hpp"
#include "ShuffleVector.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
/*
////Exercise 12.02
    int intArray[] ={1, 2, 3, 15, 23, 31};
    cout << "linearSearch(intArray, 3, 6) is " << linearSearch(intArray, 3, 6) << endl;
    double doubleArray[] = {12.2, 3.2, 4, 5.9, 7};
    cout << "linearSearch(doubleArray, 12.2, 5) is " << linearSearch(doubleArray,12.2, 5) << endl;
    string stringArray[] = {"lets", "go", "BUCS"};
    string key = "BUCS";
    cout << "linearSearch(stringArray, BUCS, 3) is " << linearSearch(stringArray, key, 3) << endl;
    
 
////Exercise 12.04
    int list1[] = {1, 9, 45, 66, 57, 135};
    
    cout << "Is the int array sorted? " << (isSorted(list1, 6) ? "true" : "false") << endl;
    
    double list2[] = {1, 2.9, 4.5, 6.6, 57};
    
    cout << "Is the double array sorted? " << (isSorted(list2, 5) ? "true" : "false") << endl;
    
    string list3[] = {"Lets", "GO", "BUCS"};
    
    cout << "Is the string array sorted? " << (isSorted(list3, 3) ? "true" : "false") << endl;
    
 */
///Exercise 12.08
    Vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    cout << "---------------\nv1\n";
    for (int i = 0; i < v1.size(); i++)
        cout << v1.at(i) << " \n";
    
    Vector<int> v2;
    v2.push_back(3);
    v2.push_back(4);
    v2.push_back(5);
    v2.push_back(6);
    v2.push_back(7);
    
    cout << "---------------\nv2\n";
    for (int i = 0; i < v1.size(); i++)
        cout << v2.at(i) << " \n";
    
    v1.swap(v2);
    
    cout << "---------------\nv1\n";
    for (int i = 0; i < v1.size(); i++)
        cout << v1.at(i) << " \n";
    cout << "---------------\nv2\n";
    for (int i = 0; i < v1.size(); i++)
        cout << v2.at(i) << " \n";
 /*
////Exercise 12.20
    vector<int> v;
    
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    
    shuffle(v);
    
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    
    
*/
////Exercise 12.25
    
    
 
    return 7;
}
