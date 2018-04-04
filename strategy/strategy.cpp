#include "strategy.h"
#include <iostream>
#include <sstream>

std::string Strategy::getStr(std::string in)
{
	return "No Strategy!";
}

int Strategy::str()
{
	return -1;
}

std::string AStrategy::getStr(std::string in)
{
	std::ostringstream ret;
	ret << "Strategy A: " << in << ":";
	return ret.str();
}

int AStrategy::str()
{
	return 1;
}

std::string BStrategy::getStr(std::string in)
{
	std::ostringstream ret;
	ret << "Strategy B: " << in << ":";
	return ret.str();
}

int BStrategy::str()
{
	return 2;
}

Entity::Entity(Strategy *s)
	: strategy(s)
{}

std::string Entity::getStrategy()
{
	std::ostringstream ret;
	ret << "Current Strategy: " << strategy->getStr("Test String");
	return ret.str();
}

int Entity::str()
{
	return strategy->str();
}

int main(int argc, char **argv)
{
	Strategy *a_str = new AStrategy();
	Strategy *b_str = new BStrategy();

	Entity *e_a = new Entity(a_str);
	Entity *e_b = new Entity(b_str);

	std::cout << "Entity with Strategy A:\n\t" << e_a->getStrategy() << std::endl;
	std::cout << "Entity with Strategy B:\n\t" << e_b->getStrategy() << std::endl;

	int e_a_str = e_a->str();
	int e_b_str = e_b->str();

	if(e_a_str != 1 && e_b_str != 2)
		return 1;

	return 0;
}
