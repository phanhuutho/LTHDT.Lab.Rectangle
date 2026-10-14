#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
private:
	int len; //chieu dai
	int wid; //chieu rong
public:
	Rectangle(); //default constructor
	Rectangle(int length, int width); //parameterized constructor 

	//setters
	void setLength(int newLength);
	void setWidth(int newWidth);

	//getters
	int getLength();
	int getWidth();

	//functions operations
	int perimeter();
	double diagonal();
	int area();

	void display(); //printer

	bool isSquare(); //check rectangle is square

	void draw(char c = '*'); //draw rectangle
};

