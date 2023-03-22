#include "function_pointers.h"
#include<stdlib.h>

/**
 * print_name - funtion prints a name
 * @name: a person's name
 * @f: points t0 the function
 *
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);

}
