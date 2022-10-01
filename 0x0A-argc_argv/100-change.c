#include <stdio.h>
#include <stdlib.h>

/**
 * notInteger - checks if s is not integer
 * @s: string to check
 * Return: 0 or 1
 */

int notInteger(const char *s)

{
int i = 0;

while (s[i] != '\0')
{
	if (s[i] < '0' || s[i] > '9')
		return (0);
	i++;
}
	return (1);
}


/**
 * main - adds positive numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])

{
	int i = 0, change = 0, coin = 0;

	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (notInteger(argv[1]))
	{
		i = atoi(argv[1]);/*convert str to int*/

		while (i > 0 && coin <= 4)/*number of array in coins = 4*/
		{
			if (i >= coins[coin])
			{
				i -= coins[coin];
				change++;
			}
			else
			{
				coin++;
			}
		}
	}

	printf("%i\n", change);
	return (0);
}
