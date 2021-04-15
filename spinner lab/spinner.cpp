#include "spinner.h"
#include <iostream>
#include <random>
#include <time.h>

Slot* AddSlot(Slot* last, string name){
	//create a new slot, get pointer to it
	Slot* newSlot = new Slot;

	//add name to newSlot: pull from function(string name)


	//if current is null
		//make newSlot next point to newSlot

	//else
		//make newSlot 'next' point to newSlot


	//returns a pointer to the new slot added by the wheel
}
void PrintWheel(Slot* current) {
	//loop through all the slots, print one name per line

	//make new pointer called current and set it to the parameter start

	//do 
		//print out the name of current
		//advance current to the next slot by setting current to current next
	//while current does not equal start

}
Slot* SpinWheel(Slot* start) {
	//rest the random number generator
		//srand((unsigned)time(NULL));
	
	//get a random number between 1 and maxSpin
		//int spin = (rand()%maxSpin)+1

	//for(spin times)
		//advance current to the next slot by setting current to current next
		//optional: print out the name of current (this probably helps with debugging)

	//print out the name of current indicating the slot landed on

	//return current
}