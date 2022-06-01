#include "MyClass.hpp"
#include<iostream>
#include "Shape.hpp"
#include "Account.hpp"
#include "Student.hpp"
void zad12()
{
    MyClass o1, o2;
    o1.setVariable(16);
    int value = o1.getVariable();
    int value2 = o2.getVariable();
    std::cout << value << " " << value2 << std::endl;


    Rectangle rect;
    rect.setDimensions(3, 7); //a co gdybysmy wymiary pobrali od uzytkownika?
    std::cout <<"pole "<< rect.getField() << " obwod " << rect.getCircuit() << std::endl;

    Circle circle;
    circle.setDimensions(5);
    std::cout << "pole " << circle.getField() <<" obwod"<<circle.getCircuit() <<std::endl;

    Triangle triangle;
    triangle.setDimensions(20, 14);
    std::cout << "pole "<<triangle.getField() << std::endl;

    int z = 0;
    std::cin >> z;
    Square square(z);
     std::cout << "pole kwadratu = " << square.pole() << std::endl;
}
void zadAccount()
{
Account prv;
    prv.deposit(150);	                    // 150//prv.deposit(-10);	// warto obsluzyc
    std::cout << "stan konta= " << prv.getBalance() << std::endl;
    int cash = prv.withdraw(100); //balance = 50, cash = 100
    std::cout << "stan konta= " << prv.getBalance() << std::endl;
   cash = prv.withdraw(100); //balance = 0, cash = 50
    std::cout << "stan konta= " << prv.getBalance() << std::endl;
    //prv.withdraw(-10) // warto obsluzyc
}
void zadStudent()
{
    std::string x, y;
    std::cout << "podaj imie i nazwisko"<<std::endl;
    std::cin >> x >> y;
  Student osoba(x,y);
  std::cout << "student " << osoba.getName()<<" "<<osoba.getSurName() << std::endl;
   osoba.setNotes(5,4,5,4,5);
   std::cout << "srednia ocen wynosi  " << osoba.getAverage()  << std::endl;

}
int main() 
{
    //zad12();
    //zadAccount();
    zadStudent();
    
}