#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - print numbers as ascii char
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
