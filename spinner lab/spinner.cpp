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
	newSlot->name = name;

	if (current == NULL) {
		//make newSlot next point to newSlot
		newSlot->next = newSlot;
	}
	else {
		//make newSlot next point to current next
		newSlot->next = current->next;
		//make current next point to newSlot
		current->next = newSlot;
	}		
	return(newSlot);
}
void PrintWheel(Slot* start) {
	cout << "running PrintWheel" << endl;
	//loops through all the slots, print one name per line

	//make new pointer called current and set it to the parameter start
	Slot* currentSlot = start;
	cout << "i just made the new slot named current, and set it to the value start" << endl;

	do {
		//cout << "im in the do while loop" << endl;

		//print out the name of current
		cout << "current slot named " << currentSlot->name << endl;

		//advance current to the next slot by setting current to current next
		currentSlot = currentSlot->next;

	} while (currentSlot != start);
}
Slot* Spin(Slot* current) {
	cout << "running Spin" << endl;

	//rest the random number generator
	srand((unsigned)time(NULL));
	
	//get a random number between 1 and maxSpin
	int randomSpin = (rand() % maxSpin) + 1;

	//for(spin times)
		for (int i = 0; i <= randomSpin; i++){
			current = current->next;
			cout << current->name << endl;
		}
		

	//print out the name of current indicating the slot landed on
	cout << "the spinner landed on slot " << current->name << endl;

	return(current);
}