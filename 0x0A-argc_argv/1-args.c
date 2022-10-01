#include <stdio.h>
#include "main.h"

/**
 * main - Prints number of argument  passed
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])

{

	(void) argv; /*ignore argv*/

	printf("%i\n", argc - 1);


	return (0);

}
