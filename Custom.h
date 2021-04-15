#pragma once
#include "Event.h"
class Custom :
	public Event
{
	string description;

public:

	Custom();
	Custom(string description);
	~Custom();

	void toString();
};

