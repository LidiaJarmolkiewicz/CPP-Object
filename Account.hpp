#pragma once
#include <string>
class Account {
	int balance=0;
	std::string number;
	std::string generateBankNumber();
public:
	Account();//konstruktor-metoda kt uruchamia siê 
	int withdraw(int amount);
	void deposit(int amount);
	int getBalance();
};