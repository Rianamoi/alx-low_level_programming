#include <stdio.h>
#include <stdlib.h>

/**
 * notInteger - checks if s is not an integer
 * @s: string to check
 * Return: 0 if true or 1
 */

int notInteger(const char *s)

{

	int i = 0;

	while (s[i] != '\0')

	{

		if (s[i] < '0' || s[i] > '9')
			return (1);

		i++;

	}

	return (0);

}


/**
 * main - adds positive numbers
 * @argc: int
 * @argv: list
 * Return: 0
 */

int main(int argc, char const *argv[])

{

	int sum = 0;

	while (--argc)

	{
		if (notInteger(argv[argc]))
		{

			printf("Error\n");
			return (1);
		}

	sum += atoi(argv[argc]);

	}

	printf("%i\n", sum);

	return (0);

}
