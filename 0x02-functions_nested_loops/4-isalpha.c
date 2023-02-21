#include "main.h"

/**
 * _isalpha - check for alphabetic characers
 *
 * @c : is the character to check
 *
 * Return: 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
