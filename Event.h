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

	Date getEventDate() const&;
	Time_ getEventTime() const&;
	void setEventDate(Date eventDate);
	void setEventTime(Time_ eventTime);


	virtual void toString() = 0;

	bool operator ==(const Event& obj) const&;
	bool operator !=(const Event& obj) const&;
	bool operator <(const Event& obj) const&;
	bool operator <=(const Event& obj) const&;
	bool operator >(const Event& obj) const&;
	bool operator >=(const Event& obj) const&;
};