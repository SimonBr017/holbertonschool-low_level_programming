#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 * with u=n%10 to print the las digit of n
 * Return: returns 0
 */
int main(void)
{
	int n, u;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/*my code start here*/
	u = n % 10;

	if (u > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, u);

	if (u < 6 && u != 0) /*!! if u=0<6 so &&u!=0 for and u differnt of 0*/
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, u);

	if (u == 0)
		printf("Last digit of %d is %d and is 0\n", n, u);
/*my code finish here */
	return (0);
}
