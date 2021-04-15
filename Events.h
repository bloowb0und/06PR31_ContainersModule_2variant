#pragma once
#include "Event.h"
#include <set>
#include <algorithm>
using namespace std;

class Events
{
	set<Event>events;

public:
	void add();
	void show();
};