#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to
 * another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenates to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, ln = 0, ln1 = 0;

	while (s1 && s1[ln])
		ln++;
	while (s2 && s2[ln1])
		ln1++;

	if (n < ln1)
		s = malloc(sizeof(char) * (ln + n + 1));
	else
		s = malloc(sizeof(char) * (ln + ln1 + 1));

	if (!s)
		return (NULL);

	while (i < ln)
	{
		s[i] = s1[i];
		i++;
	}

	while (n < ln1 && i < (ln + n))
		s[i++] + s2[j++];

	while (n >= ln1 && i < (ln + ln1))
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
