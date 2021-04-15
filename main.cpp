#include "Events.h"

int main()
{
	int menu = 0;

	do
	{
		cout << "+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+- MENU -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+\n";
		cout << "1 | Add event\n";
		cout << "2 | Delete event\n";
		cout << "+-|-----------------------------\n";
		cout << "3 | Show all events\n";
		cout << "4 | Show events by time\n";
		cout << "5 | Show events by Date\n";
		cout << "6 | Show events by Hero\n";
		cout << "7 | Show events by Place\n";
		cout << "8 | Show events by Description\n";
		cout << "+-|-----------------------------\n";
		cout << "9 | Save to events to file\n";
		cout << "10| Load events from file\n";
		cout << "+-|-----------------------------\n";
		cout << "0 | Exit\n";
		cout << "+------------------------------------------------------------------------+\n";

		cin >> menu;

		switch (menu)
		{
		default: 
			cout << "Enter a different number\n";
			break;
		case 0: 
			cout << "Goodbye!\n";
			break;
		case 1:

			break;
		}

	} while (menu != 0);

	return 0;
}