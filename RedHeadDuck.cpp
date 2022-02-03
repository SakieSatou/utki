#include "RedHeadDuck.h"

RedHeadDuck::RedHeadDuck() {
	flybehavior = new FlyWithWings();
	quackbehavior = new Squeak();
}

void RedHeadDuck::display() {
	cout << "I'm RedHeadDuck bro CJ" << endl;
}