#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * prints _putchar, followed by a new line
 * Return:0
 */

int main(void)
{

	char c[9] = "_putchar";
	int a = 0;

	while (a < 8)
	{
	_putchar(c[a]);
	a++;
	}
	_putchar('\n');
	return (0);
}
