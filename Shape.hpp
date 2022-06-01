#pragma once
class Rectangle {
	int a=0, b=0;
public:
	void setDimensions(int x, int y);
	int getField();
	int getCircuit();
};
class Circle {
	int r = 0;
public:
	void setDimensions(int z);
	double getField();
	double getCircuit();
};
class Triangle {
	int a = 0, h = 0;
public:
	void setDimensions(int w, int z);
	double getField();
};
class Square {
	int a = 0;
public:
	Square(int bok) {
		a = bok;
	}
	int pole();
};