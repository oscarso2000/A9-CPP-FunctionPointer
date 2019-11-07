//CS 2024 -- A5
//Written by Oscar So (ons4) 
//September 27, 2019

#include <iostream>
#include "bankaccounth.h"
#include "bankh.h"
using namespace std;

void Bank::newAccount(){
    BankAccount account;
    int number; 
    string name;
    int balance;
    cout << "NEW ACCOUNT: " << endl;
    cout << "ENTER ACCOUNT NUMBER: ";
    cin >> number;
    cout << "ENTER ACCOUNT NAME: ";
    cin >> name;
    cout << "ENTER OPENING BALANCE: ";
    cin >> balance;
    account.setBalance(balance);
    account.setName(name);
    account.setNumber(number);
    this -> mAccounts.insert(mAccounts.end(), account);
}

void Bank::listAccounts(){
    cout << "ACCT# : NAME : BALANCE" << endl;
    for (int i=0; i<this -> mAccounts.size(); i++){
        cout << this -> mAccounts[i].getNumber() << " : " << this ->mAccounts[i].getName() \
        << " : " << this -> mAccounts[i].getBalance() << endl;
    }
}