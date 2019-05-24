#pragma once

#include <iostream>
using namespace std;

class complex
{

private:
	int re, im;
public:
	complex()
	{
		re = 0;
		im = 0;
	}
	complex(int re1, int im1) //constructor
	{
		re = re1;
		im = im1;
	}
	friend ostream& operator<<(ostream& out, const complex &numb)
	{
		out << numb.re;//works but error
		if (numb.im)
			if (numb.im > 0)
				out << '+' << numb.im << 'j';
			else
				out << numb.im;
		return out;
	}
};
