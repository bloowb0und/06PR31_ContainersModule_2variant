#include "BirthDay.h"

BirthDay::BirthDay() :Event()
{
	this->hero = "Nobody chosen";
	this->place = "None";
	this->age = 0;
}

BirthDay::BirthDay(string hero, string place, int age, Date eventDate, Time_ eventTime)
{
	this->hero = hero;
	this->place = place;
	this->age = age;

	this->eventDate = eventDate;
	this->eventTime = eventTime;
}

BirthDay::~BirthDay()
{
}

Date BirthDay::getEventDate() const&
{
	return this->eventDate;
}

Time_ BirthDay::getEventTime() const&
{
	return this->eventTime;
}

void BirthDay::setEventDate(Date eventDate)
{
	this->eventDate = eventDate;
}

void BirthDay::setEventTime(Time_ eventTime)
{
	this->eventTime = eventTime;
}

string BirthDay::getHero()
{
	return this->hero;
}

string BirthDay::getPlace()
{
	return this->place;
}

int BirthDay::getAge()
{
	return this->age;
}

void BirthDay::setHero(string hero)
{
	if (hero.length() > 0)
		this->hero = hero;
	else
		cout << "Error\n";
}

void BirthDay::setPlace(string place)
{
	if (place.length() > 0)
		this->place = place;
	else
		cout << "Error\n";
}

void BirthDay::setAge(int age)
{
	if (age > 0)
		this->age = age;
	else
		cout << "Error\n";
}

void BirthDay::toString()
{
	cout << "Hero: " << this->hero << " | Place: " << this->place << " | Age: " << this->age << endl;
}