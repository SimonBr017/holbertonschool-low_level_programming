#include <stdio.h>


void print_something(void) __atribute__((constructor));
/**
 *print_something - print something before the main
 */
void print_something(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
