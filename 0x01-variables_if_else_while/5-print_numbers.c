#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

/**
 * main - prints the numbers from 0 to 10
 *
 * Return: Always 0 {Success)
 */
int main(void)
{
	int count;

	for (count = 0; count < 10; count++)
	{
		printf("%d", count);
	}
	putchar('\n');
	return (0);
}
