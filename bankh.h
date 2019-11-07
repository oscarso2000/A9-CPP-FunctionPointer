//CS 2024 -- A5
//Written by Oscar So (ons4) 
//September 27, 2019
#pragma once
#include <iostream>
#include <vector>
#include "bankaccounth.h"
using namespace std;

class Bank {
    public:
        void newAccount();
        void listAccounts();
    private:
         vector<BankAccount> mAccounts;
};