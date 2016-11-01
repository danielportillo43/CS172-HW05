//
//  NewAccountClass.hpp
//  homework-05
//
//  Created by Daniel Portillo on 10/26/16.
//  Copyright © 2016 Daniel Portillo. All rights reserved.
//

#ifndef NewAccountClass_hpp
#define NewAccountClass_hpp

#include <stdio.h>
#include <string>
using namespace std;

class NewAccount {
private:
    int id;
    double balance;
    double static annualInterestRate;
    string name;
    
public:
    NewAccount();
    
};

#endif /* NewAccountClass_hpp */
