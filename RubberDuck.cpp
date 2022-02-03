#include "RubberDuck.h"

RubberDuck::RubberDuck(){
	flybehavior = new FlyNoWay();
	quackbehavior = new MuteQuack();
}

void RubberDuck::display() {
	cout << "<i'm RubberDuck>" << endl;
}