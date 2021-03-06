#include "Events.h"
#include "BirthDay.h"
#include "Custom.h"
#include "Meeting.h"

void Events::add()
{
	int eventType = 0;
	set<Event*, compare>::iterator item;

	string str1, str2, str3;
	Date d;
	Time_ t;
	int a;
	bool ifExists = false;

	cout << "What type of event do you want to add? (1 - birthday; 2 - meeting; 3 - custom)\n";
	cin >> eventType;

	cout << "Enter event date: ";
	cin >> d;

	cout << "Enter event time: ";
	cin >> t;

	for (item = events.begin(); item != events.end(); item++)
	{
		if ((*item)->getEventDate() == d && (*item)->getEventTime() == t)
		{
			ifExists == true;
			break;
		}
	}

	if (!ifExists)
	{
		switch (eventType)
		{
		default:
			cout << "Error while choosing event type\n";
			break;

		case 1:
			cout << "Enter hero: ";
			cin.get();
			getline(cin, str1);

			cout << "Enter place: ";
			getline(cin, str2);

			cout << "Enter age: ";
			cin >> a;

			events.insert(new BirthDay(str1, str2, a, d, t));

			break;

		case 2:
			cout << "Enter person: ";
			cin.get();
			getline(cin, str1);

			cout << "Enter place: ";
			getline(cin, str2);

			events.insert(new Meeting(str1, str2, d, t));

			break;

		case 3:
			cout << "Enter event description: ";
			cin.get();
			getline(cin, str1);

			events.insert(new Custom(str1, d, t));

			break;
		}
	}
	else
		cout << "There's an event planned for this date and time\n";
}

void Events::del()
{
	set<Event*, compare>::iterator item;
	set<Event*, compare>::iterator itemDel;

	string str1, str2, str3;
	Date d;
	Time_ t;
	int a;
	bool ifExists = false;

	cout << "Enter event date: ";
	cin >> d;

	cout << "Enter event time: ";
	cin >> t;

	for (item = events.begin(); item != events.end(); item++)
	{
		if ((*item)->getEventDate() == d && (*item)->getEventTime() == t)
		{
			ifExists == true;
			break;
		}
	}

	if (ifExists)
	{
		for (item = events.begin(); item != events.end();)
		{
			itemDel = item;
			item++;

			if ((*itemDel)->getEventDate() == d && (*itemDel)->getEventTime() == t)
			{
				ifExists == true;

				events.erase(itemDel);

				break;
			}
		}
	}
	else
		cout << "There's an event planned for this date and time\n";
}

void Events::show()
{
	set<Event*, compare>::iterator item;

	for (item = events.begin(); item != events.end(); item++)
	{
		cout << (*item)->toString() << endl;
	}
}