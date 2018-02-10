#!/bin/bash
for i in "$@";
do
	find ~/Projects -name "$i" -type f -exec cp {} . \;
	gcc -c $i;
done

ar rc libholberton.a *.o
ranlib libholberton.a

