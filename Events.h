#pragma once
#include "Event.h"
#include <set>
#include <algorithm>
using namespace std;

class Events
{
	set<Event*, compare> events;

public:
	void add();
	void del();
	void show();

};