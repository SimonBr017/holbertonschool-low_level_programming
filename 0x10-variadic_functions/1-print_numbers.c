#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - obvious
 *@n: number of int pass to the function
 *@separator: string to be print between numbers
 *Return:nothing void print the number followed by new line
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i != n - 1 && separator != NULL)
			printf("%s",  separator);
	}
	printf("\n");
	va_end(ap);
}
