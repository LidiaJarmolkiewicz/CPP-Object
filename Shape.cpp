#include "Shape.hpp"
#include<cmath>


//konstruktor bezparametrowy - moze byc pusty
//potrzebny, zeby utworzyc obiekt Rectangle rect
//gdybysmy nie mieli konstruktora parametryzowanego - ten by sie sam wygenerowal


void Rectangle::setDimensions(int x, int y)
{
    a = x;
    b = y;
}

int Rectangle::getField()
{
    return a * b;
}

int Rectangle::getCircuit()
{
    return (2 * a) + (2 * b);
}

void Circle::setDimensions(int z)
{
    r = z;
}

double Circle::getField()
{
    return (3.14*r*r);
}

double Circle::getCircuit()
{
    return 2 * 3.14 * r;
}

void Triangle::setDimensions(int w, int z)
{
    a = w;
    h = z;
}

double Triangle::getField()
{
    return 0.5*a*h;
}

int Square::pole()
{
    return a*a;
}
