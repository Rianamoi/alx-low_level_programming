#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	va_list arg_pointer;

	unsigned int i;

	va_start(arg_pointer, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg_pointer, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg_pointer);
}
