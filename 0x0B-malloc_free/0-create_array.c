#include "main.h"
#include <stdlib.h>

/**
 * create_array - function an array of chars
 * @size: the size of the array
 * @c: where char will be sotored
 *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *c;
	unsigned int i;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
