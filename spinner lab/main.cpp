#include <iostream>
#include "spinner.h"

using namespace std;

int main()
{
	Slot* start = NULL;
	Slot* current = NULL;
	cout << "initiated slots start and current " << endl;

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

	cout << "set all the grade slots A-F" << endl;

	PrintWheel(start);
	cout << "did PrintWheel(start)" << endl;

	current = start;
	for (int i = 1; i <= 3; i++) {
		cout << endl << "Spin " << i << ":" << endl;
		current = Spin(current);
	}
	
	testing testStruct;
	testStruct.name = "john";
	cout << testStruct.name;

	return(0);
}