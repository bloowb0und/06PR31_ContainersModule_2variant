#pragma once
#include <string>
#include <iostream>
#include "Date.h"
#include "Time_.h"
using namespace std;

class Event
{
	Date eventDate;
	Time_ eventTime;

public:
	Event();
	Event(Date eventDate, Time_ eventTime);
	~Event();

	virtual void toString() = 0;
};