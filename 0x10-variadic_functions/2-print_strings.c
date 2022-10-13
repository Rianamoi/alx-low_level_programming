#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 * Return: no return.
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	va_list arg_pointer;

	unsigned int i;

	char *str;

	va_start(arg_pointer, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(arg_pointer, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_pointer);
}
