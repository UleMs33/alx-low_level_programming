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
	int count;

	for (count = 0; count < 52; count++)
	{
		printf("%d\n", abc);
	}
	return (0);
}
