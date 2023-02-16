#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c;
int i;
long int l_i;
long long int l_l_i;
float f;

printf("Size of a char: %d byte(s)\n", sizeof(c));
print ("Size of an int: %d byte(s)\n", sizeof(i));
printf("Size of a long int: %d byte(s)\n", sizeof(l_i));
printf("Size of a long long int: %d bytes(s)\n", sizeof(l_l_i));
printf("Size of a float: %d byte(s)\n", sizeof(f));
return (0);
}
