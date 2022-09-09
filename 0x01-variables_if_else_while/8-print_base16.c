#include <stdio.h>
#include <stdlib.h>

/**
 *main - main block
 *Description: prints all the numbers of base 16 in lowercase
 *Return: 0
 */

int main(void)

{	int i, a;

	for (i = 0; i <= 9; i++)
	{
	putchar(i + 48);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
	putchar(a);
	}

	putchar('\n');
	return (0);

}
