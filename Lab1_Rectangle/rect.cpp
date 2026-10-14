#include "rect.h"

const int defaultValue = 10;
const int maxValue = 20;

Rectangle::Rectangle()
{
	len = defaultValue;
	wid = defaultValue;
}

Rectangle::Rectangle(int length, int width)
{
	len = length;
	wid = width;
}

void Rectangle::setLength(int newLength)
{
	if (newLength > 0)
		len = newLength;
	else
		cout << "Value new length invalid !!!" << endl;
}

void Rectangle::setWidth(int newWidth)
{
	if (newWidth > 0)
		wid = newWidth;
	else
		cout << "Value new width invalid !!!" << endl;
}

int Rectangle::getLength()
{
	return len;
}

int Rectangle::getWidth()
{
	return wid;
}

int Rectangle::perimeter()
{
	return (len + wid) * 2;
}

double Rectangle::diagonal()
{
	return sqrt(len * len + wid * wid);
}

int Rectangle::area()
{
	return len * wid;
}

void Rectangle::display()
{
	if (len > 0 && wid > 0 && len <= maxValue && wid <= maxValue)
	{
		cout << len << " x " << wid << endl;
	}
	else
	{
		if (len < 0)
		{
			cout << "invalid length !!!" << endl;
		}
		if (wid < 0)
		{
			cout << "invalid width !!!" << endl;
		}
	}
}

bool Rectangle::isSquare()
{
	return len == wid;
}

void Rectangle::draw(char c)
{
	for (int i = 0; i < wid; i++)
	{
		for (int j = 0; j < len; j++)
		{
			cout << c;
		}
		cout << endl;
	}
}