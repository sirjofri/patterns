#ifndef OBSERVER_H_
#define OBSERVER_H_

#include <vector>
#include <string>

class AbstractObserver
{
	public:
		virtual void update(int info) = 0;
};

class AbstractSubject
{
	public:
		virtual void reg(AbstractObserver *o) = 0;
		virtual void dereg(AbstractObserver *o) = 0;
		virtual void update() = 0;
};

class Observer : public AbstractObserver
{
	public:
		void update(int info);
		int getInfo();
	private:
		int _info = 0;
};

class Subject : public AbstractSubject
{
	public:
		void reg(AbstractObserver *o);
		void dereg(AbstractObserver *o);
		void update();
	private:
		std::vector<AbstractObserver*> observers;
};

#endif
