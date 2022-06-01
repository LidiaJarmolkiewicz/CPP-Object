#include "Student.hpp"
#include<iostream>



void Student::setNotes(int u, int w, int x, int y, int z)
{
	a = u;
	b = w;
	c = x;
	d = y;
	e = z;

}


std::string Student::getName()
{
	return this->name;
}

std::string Student::getSurName()
{
	return this->surname;
}

double Student::getAverage()
{
	return (a+b+c+d+e)/5.0;
}


