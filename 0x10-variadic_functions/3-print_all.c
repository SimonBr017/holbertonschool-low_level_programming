#include "variadic_functions.h"

/**
 * print_char - Print a character
 * @c: format parameter.
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_integer - Print an integer
 * @i: format parameter.
 *
 */

void print_integer(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_float - Print a float
 * @f: format parameter.
 *
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - Print a string
 * @s: format paremeter.
 */

void print_string(va_list s)
{
	char *string = va_arg(s, char *);

	if (string == NULL)
	{
		string = "(nil)";
	}

	printf("%s", string);
}

/**
 * print_all - print anything
 * @format: the specified format parameter
 */

void print_all(const char * const format, ...)
{
	form_t forms[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list aprm;
	unsigned int i = 0;
	unsigned int j = 0;
	char *separator = "";

	va_start(aprm, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (forms[j].form != NULL)
		{
			if (format[i] == *(forms[j]).form)
			{
				printf("%s", separator);
				forms[j].f(aprm);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(aprm);
	printf("\n");
}
