OUT=singleton/singleton strategy/strategy

all: $(OUT)

singleton/singleton: singleton/singleton.cpp singleton/singleton.h
	g++ -o $@ $<

strategy/strategy: strategy/strategy.cpp strategy/strategy.h
	g++ -o $@ $<

clean:
	- rm $(OUT)
