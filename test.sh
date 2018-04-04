#!/bin/bash

./singleton/singleton 2>/dev/null &>/dev/null
if [ "$?" = "0" ]; then
	echo "Singleton works";
else
	echo "Singleton does not work";
fi

./strategy/strategy 2>/dev/null &>/dev/null
if [ "$?" = "0" ]; then
	echo "Strategy works";
else
	echo "Strategy does not work";
fi
