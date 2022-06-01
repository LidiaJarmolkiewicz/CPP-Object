#include "Account.hpp"
#include<iostream>

std::string Account::generateBankNumber()
{
    return "123456789";
}

Account::Account()
{
    std::cout << "operacje na r-ku " << generateBankNumber() << std::endl;
}

int Account::withdraw(int amount)
{
    if (balance >amount)
        balance -= amount;

    else {  balance = 0;}

      
    return 0;

}

void Account::deposit(int amount)
{
    if (amount >= 0)
        balance += amount;
    else
        std::cout << "nieprawidlowa kwota ";
  
}

int Account::getBalance()
{
    return balance;
}
