#include "Duck.h"

Duck::Duck() {

}

void Duck::performQuack() {
	quackbehavior->quack();
}

void Duck::swim() {
	cout << "float" << endl;
}

void Duck::performFly(){
	flybehavior->fly();
}