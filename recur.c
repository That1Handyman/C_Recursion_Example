/*
 * recur.c
 *
 *  Created on: Sep 29, 2017
 *      Author: Handyman
 */

// array initialization & access

#include <stdio.h>
void up_and_down(int);

int main(void)
{
    up_and_down(1);		//Main method immediately calls for 'up_and_down' function, passing in 1
    return 0;
}

void up_and_down(int n)	//function int n takes in 1
{
    printf("Level %d: n location %p\n", n, &n); //1		%p, can show you a variable
    //%p called the local variable (int n)
    //prints out its variable form

    if (n < 4)	//AWESOME TRICK
        up_and_down(n+1);//Function acts like a for loop, forces n to be greater than 4, thereby returning to starting point(1)
    	printf("LEVEL %d: n location %p\n", n, &n); //2	Prints n+1 and n-1 when > 4
}
