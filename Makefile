OUT=singleton/singleton

all: $(OUT)

singleton/singleton: singleton/singleton.cpp singleton/singleton.h
	g++ -o $@ $<

clean:
	- rm $(OUT)
