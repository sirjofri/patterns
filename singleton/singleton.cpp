#include <iostream>
#include "singleton.h"

Singleton* Singleton::singleton = nullptr;

Singleton::Singleton()
{ }

Singleton::~Singleton()
{
	singleton = nullptr;
}

Singleton* Singleton::getInstance()
{
	return (singleton ? singleton : singleton = new Singleton());
}

int main()
{
#ifndef VERBOSETEST
	Singleton* sing1;
	Singleton* sing2;

	sing1 = Singleton::getInstance();
	sing2 = Singleton::getInstance();

	if(sing1 == sing2)
		return 0;
	return 1;
#endif

#ifdef VERBOSETEST
	Singleton* mySingleton;
	std::cout << "Pointer Values:" << std::endl;
	std::cout << "0   call: " << mySingleton << std::endl;
	mySingleton = Singleton::getInstance();
	std::cout << "1st call: " << mySingleton << std::endl;
	mySingleton = Singleton::getInstance();
	std::cout << "2nd call: " << mySingleton << std::endl;
	return 0;
#endif
}
