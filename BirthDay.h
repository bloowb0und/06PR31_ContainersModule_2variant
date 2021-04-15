#pragma once
#include "Event.h"

class BirthDay : public Event
{
	string hero;
	string place;
	int age;

public: 
	BirthDay();
	BirthDay(string hero, string place, int age);
	~BirthDay();

	virtual void toString() override;
};