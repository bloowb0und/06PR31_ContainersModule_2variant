#include "Meeting.h"

Meeting::Meeting()
{
	person = "Vasiliy Vusokiy";
	place = "Naberejnaja 24";
}

Meeting::Meeting(string person, string place)
{
	this->person = person;
	this->place = place;
}

Meeting::~Meeting()
{
}

void Meeting::toString()
{
	cout << "Person: " << this->person << endl;
	cout << "Place: " << this->place << endl;
}
