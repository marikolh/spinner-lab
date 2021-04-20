//hi this is Mariko 
#pragma once
#include <string>

using namespace std;

const int maxSpin = 500;

struct Slot {
	string name;
	Slot *next;
};

//adds new slot to the wheel
Slot* AddSlot(Slot* last, string name);

//prints out all the names found in the wheel
void PrintWheel(Slot* current);

//spins the wheel a random number of slots to get a random result
Slot* Spin(Slot* start);