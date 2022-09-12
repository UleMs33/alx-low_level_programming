#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints lower case alphabet
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	for (i < 26; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
