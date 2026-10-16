#include "rect2.h"

const int defaultValue = 10;
const int maxValue = 20;

int Rectangle::thisMany = 0;

Rectangle::Rectangle()
{
	this->len = defaultValue;
	this->wid = defaultValue;
	this->fillString = "";
	this->thisMany++;
}

Rectangle::Rectangle(int length, int width, string fillString)
{
	this->setLength(length);
	this->setWidth(width);
	this->fillString = fillString;
	this->thisMany++;
}

Rectangle::~Rectangle()
{
	this->thisMany--;
}

void Rectangle::setLength(int newLength)
{
	if (newLength > 0 && newLength <= maxValue)
		this->len = newLength;
	else
		this->len = defaultValue;
}

void Rectangle::setWidth(int newWidth)
{
	if (newWidth > 0 && newWidth <= maxValue)
		this->wid = newWidth;
	else
		this->wid = defaultValue;
}

int Rectangle::getLength() const
{
	return this->len;
}

int Rectangle::getWidth() const
{
	return this->wid;
}

int Rectangle::perimeter() const
{
	return (this->len + this->wid) * 2;
}

string Rectangle::fill() const
{
	return this->fillString;
}

double Rectangle::diagonal() const
{
	return sqrt(this->len * this->len + this->wid * this->wid);
}

int Rectangle::area() const
{
	return this->len * this->wid;
}

void Rectangle::display() const
{
	if (this->len > 0 && this->wid > 0 && this->len <= maxValue && this->wid <= maxValue)
	{
		cout << "[" << this->len << " x " << this->wid << "]";
	}
	else
	{
		if (this->len < 0 || this->len > maxValue)
		{
			cout << "invalid length !!!" << endl;
		}
		if (this->wid < 0 || this->wid > maxValue)
		{
			cout << "invalid width !!!" << endl;
		}
	}
}

bool Rectangle::isSquare()
{
	return this->len == this->wid;
}

void Rectangle::draw(char c)
{
	for (int i = 0; i < this->wid; i++)
	{
		for (int j = 0; j < this->len; j++)
		{
			cout << c;
		}
		cout << endl;
	}
}

int Rectangle::howMany()
{
	return thisMany;
}