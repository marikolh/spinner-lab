#include "spinner.h"
#include <iostream>
#include <random>
#include <time.h>

using namespace std;

Slot* AddSlot(Slot* current, string name){
	cout << "running AddSlot" << endl;

	//create a new slot, get pointer to it
	Slot* newSlot = new Slot;

	//add name to newSlot: pull from function(string name)

	if (current == NULL) {
		//make newSlot next point to newSlot

	}
	else {
		//make newSlot next point to current next
		//make current next point to newSlot

	}		
	//return newSlot
}
void PrintWheel(Slot* start) {
	cout << "running PrintWheel" << endl;

	//loops through all the slots, print one name per line

	//make new pointer called current and set it to the parameter start
	Slot* current = start;
	cout << "i just made the new slot named current, and set it to the value start" << endl;

	do {
		cout << "im in the do while loop" << endl;

		//print out the name of current
		cout << "current slot named " << current->name << endl;

		//advance current to the next slot by setting current to current next


	} while (current != start);
}
Slot* Spin(Slot* start) {
	cout << "running Spin" << endl;

	//rest the random number generator
	srand((unsigned)time(NULL));
	
	//get a random number between 1 and maxSpin
	int spin = (rand() % maxSpin) + 1;

	//for(spin times)
		for (int i = 0; i <= spin; i++){

		}
		//advance current to the next slot by setting current to current next
		//optional: print out the name of current (this probably helps with debugging)

	//print out the name of current indicating the slot landed on

	//return current
}