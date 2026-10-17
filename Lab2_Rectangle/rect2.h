#pragma once
#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
private:
	int len; //chieu dai
	int wid; //chieu rong
	static int thisMany; //counter available rectangle
	string fillString;
public:
	Rectangle(); //default constructor
	Rectangle(int length, int width, string fillString = ""); //parameterized constructor 
	~Rectangle(); //destructor object

	//setters
	void setLength(int newLength);
	void setWidth(int newWidth);

	//getters
	int getLength() const;
	int getWidth() const;

	//get fillString
	string fill() const;

	//functions operations
	int perimeter() const;
	double diagonal() const;
	int area() const;

	void display() const; //printer

	bool isSquare(); //check rectangle is square

	void draw(char c = '*'); //draw rectangle

	static int howMany(); //get counts available rectangle
};

