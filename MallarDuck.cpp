#include "MallarDuck.h"

MallarDuck::MallarDuck() {
	flybehavior = new FlyWithWings();
	quackbehavior = new Quack();
}

void MallarDuck::display() {
	cout << "I'm MallarDuck" << endl;
}