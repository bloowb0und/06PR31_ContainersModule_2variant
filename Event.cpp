#include "Event.h"

Event::Event()
{
	this->eventDate = Date();
	this->eventTime = Time_();
}

Event::Event(Date eventDate, Time_ eventTime)
{
	this->eventDate = eventDate;
	this->eventTime = eventTime;
}

Event::~Event()
{
}