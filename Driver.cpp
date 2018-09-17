#include <string.h>
#include <iostream>
#include <cstdlib>

#include "Driver.h"

Driver::Driver()
{
	sponsor = "";
	points = 0;
}

Driver::~Driver()
{
}

void Driver::registerDriver()
{
	registerUser();

	cout << "Sponsor set to N/A" << endl;
	sponsor = "N/A";

	cout << "Points set to 0" << endl;
	points = 0;
}

int Driver::getPoints()
{
	return points;
}

string Driver::getSponsor()
{
	return sponsor;
}
