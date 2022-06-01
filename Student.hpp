#pragma once
#include <string>
#include<iostream>
class Student
{
	int a = 0,  b = 0, c = 0,  d = 0,  e = 0;
	std::string  name;
	std::string  surname;
	
public:
	Student(std::string s_name, std::string s_surname)
	{
		name = s_name;
		surname = s_surname;
	
	};

	
	
	void setNotes(int u, int w, int x, int y, int z);
	std::string getName();
	std::string getSurName();
	
	double getAverage();
	
};
