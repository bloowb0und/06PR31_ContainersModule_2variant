#pragma once
#include "Event.h"

class Custom : public Event
{
	string description;

	Date eventDate;
	Time_ eventTime;

public:

	Custom();
	Custom(string description, Date eventDate, Time_ eventTime);
	~Custom();

	Date getEventDate() const&;
	Time_ getEventTime() const&;
	void setEventDate(Date eventDate);
	void setEventTime(Time_ eventTime);

	string getDescription();
	void setDescription(string description);

	virtual void toString() override;
};