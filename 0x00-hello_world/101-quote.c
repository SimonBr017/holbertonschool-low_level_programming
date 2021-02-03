#include <stdio.h>
#include <unistd.h>
/**
 * main -Entry point
 * write to stdout
 * where 2 is stderr and 59 nbr of bytes in the sting
 * Return: returns 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
