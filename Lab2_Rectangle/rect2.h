#pragma once
#include <iostream>
#include <string>
using namespace std;

class Rectangle
{
private:
	int len; //chieu dai
	int wid; //chieu rong
	static int thisMany; //thanh vien du lieu tinh, dem so luong hinh chu nhat
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
	string fill() const;

	//functions operations
	int perimeter() const;
	double diagonal() const;
	int area() const;

	void display() const; //printer

	bool isSquare(); //check rectangle is square

	void draw(char c = '*'); //draw rectangle

	static int howMany(); //ham thanh vien truy cap du lieu tinh so luong hinh chu nhat
};

