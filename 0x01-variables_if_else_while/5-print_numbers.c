#include <stdio.h>
#include <stdlib.h>
/**
 * main -entry point of a program
 *
 * return: always 0 (success)
 *
 */

int main(void) 
{
	int i;
	/**
	 * for this function is used to loop the program till a condition is met
	 *
	 * printf: this function is used to print output to the stdo
	 *
	 */

    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    return 0;
}
