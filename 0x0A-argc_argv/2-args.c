#include <stdio.h>
#include "main.h"

/**
 * main - function prits all arguments it recieves
 * @argc: the number of arguments
 * @argv: the number of arrays
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
