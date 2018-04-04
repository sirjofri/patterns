#ifndef STRATEGY_H_
#define STRATEGY_H_

#include <string>

class Strategy
{
	public:
		virtual std::string getStr(std::string in);
		virtual int str();
};

class AStrategy: public Strategy
{
	public:
		std::string getStr(std::string in);
		int str();
};

class BStrategy: public Strategy
{
	public:
		std::string getStr(std::string in);
		int str();
};

class Entity
{
	public:
		Entity(Strategy *s);
		std::string getStrategy();
		int str();
	private:
		Strategy *strategy;
};

#endif
