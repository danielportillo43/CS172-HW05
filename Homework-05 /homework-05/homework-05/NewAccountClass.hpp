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

class Date {
    int year;
    int month;
    int day;
    
public:
    Date() {
        setDate(time(0));
    }
    
    Date(int elapseTime) {
        setDate(elapseTime);
    }
    
    Date(int y, int m, int d) {
        year = y;
        month = m;
        day = d;
    }
    
    void setDate(int elapseTime) {
        long seconds = elapseTime;
        long minutes = seconds / 60;
        long hours = minutes / 60;
        day = hours / 24;
        
        // Get year
        year = 1970;
        while (day >= (isLeapYear(year) ? 366 : 365)) {
            day = day - (isLeapYear(year) ? 366 : 365);
            year++;
        }
        
        // get month
        month = 1;
        while (day >= getNumberOfDaysInMonth(year, month)) {
            day = day - getNumberOfDaysInMonth(year, month);
            month++;
        }
    }
    
    int getYear() {
        return year;
    }
    
    int getMonth() {
        return month;
    }
    
    int getDay() {
        return day;
    }
    
private:
    // Determine if it is a leap year
    bool isLeapYear(int year) {
        return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0);
    }
    
    // Get the number of days in a month
    int getNumberOfDaysInMonth(int year, int month) {
        if (month == 1 || month == 3 || month == 5 || month == 7 ||
            month == 8 || month == 10 || month == 12) {
            return 31;
        }
        
        if (month == 4 || month == 6 || month == 9 || month == 11) {
            return 30;
        }
        
        if (month == 2) {
            return isLeapYear(year) ? 29 : 28;
        }
        return 0; // If month is incorrect
    }
};

class Transaction {

    char type;
    double amount;
    double balance;
    string description;
    
public:
    Transaction(char Type, double Amount, double Balance, string Description) {
        Date::Date();
        type = Type;
        amount = Amount;
        balance = Balance;
        description = Description;
    }
    
};

class NewAccount {
    
private:
    int id;
    double balance;
    double static annualInterestRate;
    string name;
    
public:
    NewAccount() {
        id = 00;
        balance = 00.00;
        annualInterestRate = 0.015;
        name = "Daniel";
    }
    
    NewAccount(string newName, int newId, double newBalance) {
        id = newId;
        balance = newBalance;
        annualInterestRate = 0.015;
        name = newName;
    }
    
    string getName() {
        return name;
    }
    int getId() {
        return id;
    }
    
    double getBalance() {
        return balance;
    }
    
    double static getAnnualInterestRate() {
        return annualInterestRate;
    }
    
    void setName(string newName) {
        name = newName;
    }
    
    void setId(int newId) {
        id = newId;
    }
    
    void setBalance(int newBalance) {
        balance = newBalance;
    }
    
    double getMonthlyInterestRate() {
        return annualInterestRate/12;
    }
    
    void withdraw(double amount, string description) {
        char type = 'w';
        balance = balance - amount;
        Transaction::Transaction(type, amount, balance, description);
    }
    void deposit(double amount, string description){
        char type = 'd';
        balance = balance + amount;
        Transaction::Transaction(type, amount, balance, description);
    }
};

#endif /* NewAccountClass_hpp */







