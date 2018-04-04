OUT=singleton/singleton strategy/strategy observer/observer

all: $(OUT)

singleton/singleton: singleton/singleton.cpp singleton/singleton.h
	g++ -o $@ $<

strategy/strategy: strategy/strategy.cpp strategy/strategy.h
	g++ -o $@ $<

observer/observer: observer/observer.cpp observer/observer.h
	g++ -o $@ $<

clean:
	- rm $(OUT)
