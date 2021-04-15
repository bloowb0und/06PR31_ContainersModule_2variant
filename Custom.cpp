#include "Custom.h"

Custom::Custom()
{
	this->description = "We are going to the cinema today =)\n";
}

Custom::Custom(string description)
{
	this->description = description;
}

Custom::~Custom()
{
}

void Custom::toString()
{
	cout << "Description: " << this->description << endl;
}