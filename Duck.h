#pragma once
#include <iostream>
#include "FlyBehavior.h"
#include "FlyWithWings.h"
#include "FlyNoWay.h"
#include "QuackBehavior.h"
#include "Quack.h"
#include "Squeak.h"
#include "MuteQuack.h"

using namespace std;

class Duck
{
protected:
	FlyBehavior* flybehavior;
	QuackBehavior* quackbehavior;
public:
	Duck();
	void performQuack();
	void swim();
	void performFly();
	virtual void display() = 0;
};

