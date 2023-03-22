#include "function_pointers.h"
/**
 * array_iterator - function executes on each element
 * of the given array
 * @array: the given array
 * @size: size of the given array
 * @action: pointer to the function
 *
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;

if (array == NULL || action == NULL)
return;

for (i = 0; i < (int) size; i++)
action(array[i]);
}
