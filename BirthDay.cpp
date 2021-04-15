#include "BirthDay.h"

BirthDay::BirthDay()
{
	this->hero = "Nobody chosen";
	this->place = "None";
	this->age = 0;
}

BirthDay::BirthDay(string hero, string place, int age)
{
	this->hero = hero;
	this->place = place;
	this->age = age;
}

BirthDay::~BirthDay()
{
}

void BirthDay::toString()
{
	cout << "Hero: " << this->hero << " | Place: " << this->place << " | Age: " << this->age << endl;
}