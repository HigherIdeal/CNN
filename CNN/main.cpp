#include <iostream>
#include "Class.h"

int main()
{
	int a = 4;
	int b = a;
	int c = a + b;
	int d = c;

	Class asdf;

	asdf.a = d;
	//asdf
	std::cout << asdf.a;
}