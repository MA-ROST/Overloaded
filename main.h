#pragma once
#include <iostream>
#include <string>
#include <vector>

using std::cout; using std::endl;
using std::vector; using std::string; using std::ostream;

struct Destructible
{
	std::string name;
	int hitPoints;

	void operator++();
	void operator--();
};

ostream& operator<< (ostream& outStream, const Destructible& obj);
