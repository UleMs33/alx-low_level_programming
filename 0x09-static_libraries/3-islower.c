#include "main.h"

/**
 * _islower - returns 1 if the input is lower case
 * returns 0 for all other cases
 *
 * @c: the character is ASCII code
 *
 * Return: 1 for lowercase character, 0 for the rest
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
