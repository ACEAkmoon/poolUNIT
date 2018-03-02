#!/bin/sh

var=$(ifconfig | grep "inet " | cut -d' ' -f2)
if test -z "$var"
then
	echo "UnitFactor!"
else
	echo $var | tr ' ' '\n'
fi
