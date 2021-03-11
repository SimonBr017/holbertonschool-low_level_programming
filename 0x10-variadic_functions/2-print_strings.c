#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - obvious
 *@n: number of int pass to the function
 *@separator: string to be print between numbers
 *Return:nothing void print the string followed by new line
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", string);
		if (i != n - 1 && separator != NULL)
			printf("%s",  separator);
	}
	printf("\n");
	va_end(ap);
}
