#include "main.h"

/**
 * _islower - returns 1 if the input is a lower case character 
 * and 0 for all other characters
 *
 * @c: The character in ASCII
 * 
 * Return: 1 for lower case, 0 for the rest
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
