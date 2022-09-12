#include<stdio.h>
#include<time.h>
#include<stdlib.h>

/**
 * main - prints lower case and upper case alphabet letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char abc[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(abc[i]);
	}
	putchar('\n');
	return (0);
}
