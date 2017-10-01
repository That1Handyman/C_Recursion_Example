# C_Recursion_Example
An example of recursion using the C programming language

This technique was taught to me by my professor a few days ago in class. It's in C and it
is an example of recursion. It's a nice little trick that demonstrates how a function could
be used as a loop, calling on to itself.

You can try and play around with it. 

You will see that if n-1 will infinitely go negative (until your computer crashes).
n will simply keep printing out 1, since it started as one and you're passing the same
number into the same function over and over again(until your computer crashes).

n+2,3,4,5,etc. will print out 1 and 1+ whatever number. Also, since it passes our border (<4),
then it will go back(print out) the same numbers it printed out the first time around.
