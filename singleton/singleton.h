/**
 * @author sirjofri
 * @version 1.0
 *
 * This document is provided AS IS, you should NEVER distribute it without...
 *
 * aah... forget it.
 */
#ifndef SINGLETON_H_
#define SINGLETON_H_

/**
 * This class is a simple singleton
 */
class Singleton
{
	public:
		/**
		 * get an instance of the singleton. create a new one if none exists
		 * (lazy initialization)
		 * @return singleton instance
		 */
		static Singleton* getInstance();
		~Singleton();

	private:
		/**
		 * the singleton is initialized once
		 */
		static Singleton* singleton;
		/**
		 * this constructor should NEVER be called from the outside
		 */
		Singleton();
};

#endif
