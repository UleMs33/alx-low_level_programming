#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

/**
 * main - print out the alphabet excluding the letters q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;

	for (count = 97; count < 123; count++)
	{
		if (count != 101 && count != 113)
		{
			putchar(count);
		}
	}
	putchar('\n');
	return (0);
}
