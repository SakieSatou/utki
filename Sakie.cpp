// Sakie.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include "Duck.h"
#include "MallarDuck.h"
#include "RedHeadDuck.h"
#include "RubberDuck.h"

int main()
{
	MallarDuck* d1 = new MallarDuck();
	
	d1->display();
	d1->performQuack();
	d1->swim();
	d1->performFly();

	cout << endl;

	RedHeadDuck* d2 = new RedHeadDuck();

	d2->display();
	d2->performQuack();
	d2->swim();
	d2->performFly();

	cout << endl;

	RubberDuck* d3 = new RubberDuck();

	d3->display();
	d3->performQuack();
	d3->swim();
	d3->performFly();

	return 0;
}
