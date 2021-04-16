#include <iostream>
#include "spinner.h"

using namespace std;

int main()
{
	Slot* start = NULL;
	Slot* current = NULL;

	start = AddSlot(NULL, "A");
	current = AddSlot(start, "A-");
	current = AddSlot(current, "B+");
	current = AddSlot(current, "B");
	current = AddSlot(current, "B-");
	current = AddSlot(current, "C+");
	current = AddSlot(current, "C");
	current = AddSlot(current, "C-");
	current = AddSlot(current, "D+");
	current = AddSlot(current, "D");
	current = AddSlot(current, "D-");
	current = AddSlot(current, "F");

	PrintWheel(start);

	current = start;
	for (int i = 1; i <= 3; i++) {
		cout << endl << "Spin " << i << ":" << endl;
		current = Spin(current);
	}

	return(0);
}