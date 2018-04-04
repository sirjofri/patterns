#include "observer.h"
#include <algorithm>
#include <iostream>

void Observer::update(int info)
{
	_info += info;
}

int Observer::getInfo()
{
	return _info;
}

void Subject::reg(AbstractObserver *o)
{
	observers.push_back(o);
}

void Subject::dereg(AbstractObserver *o)
{
	observers.erase(std::remove(observers.begin(), observers.end(), o), observers.end());
}

void Subject::update()
{
	for(AbstractObserver *o : observers)
	{
		o->update(5);
	}
}

int main(int argc, char **argv)
{
	int notok = 0;

	Observer* o_a = new Observer();
	Observer* o_b = new Observer();

	Subject* sub = new Subject();

	sub->reg(o_a);
	sub->reg(o_b);

	std::cout << "A: " << o_a->getInfo() << std::endl;
	std::cout << "B: " << o_b->getInfo() << std::endl;

	if(!notok && o_a->getInfo() != 0 && o_b->getInfo() != 0)
		notok = 1;

	sub->update();
	std::cout << "A: " << o_a->getInfo() << std::endl;
	std::cout << "B: " << o_b->getInfo() << std::endl;

	if(!notok && o_a->getInfo() != 5 && o_b->getInfo() != 5)
		notok = 1;

	sub->update();
	std::cout << "A: " << o_a->getInfo() << std::endl;
	std::cout << "B: " << o_b->getInfo() << std::endl;

	if(!notok && o_a->getInfo() != 10 && o_b->getInfo() != 10)
		notok = 1;

	return notok;
}
