//CS 2024 -- A5
//Written by Oscar So (ons4) 
//September 27, 2019
#pragma once
#include <iostream>
using namespace std;


class BankAccount {
	public:
		BankAccount();
		BankAccount(int initialBalance);
		int getBalance();
		void setBalance(int newBalance);
		bool withdrawal(int amount);
		void deposit(int amount);
		void setName(string name);
		void setNumber(int number);
		string getName();
		int getNumber();
	private:
		int mBalance;
		string mName;
		int mNumber;
};
