#pragma once
#include "Event.h"
#include <iostream>
#include < string>

using namespace std;
class Meeting :
    public Event
{
private:
    string person;
    string place;

public:
    Meeting();
    Meeting(string person, string place);
    ~Meeting();

    virtual void toString() override;

};

