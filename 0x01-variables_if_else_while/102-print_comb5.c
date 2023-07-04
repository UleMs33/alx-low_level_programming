#include <stdio.h>

/**
 * main - Prints all possible combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
    int num1, num2;

    for (num1 = 0; num1 <= 99; num1++)
    {
        for (num2 = 0; num2 <= 99; num2++)
        {
            /* Print first two-digit number */
            putchar('0' + (num1 / 10));
            putchar('0' + (num1 % 10));

            /* Print separator space */
            putchar(' ');

            /* Print second two-digit number */
            putchar('0' + (num2 / 10));
            putchar('0' + (num2 % 10));

            /* Print comma and space separator */
            if (num1 != 99 || num2 != 99)
            {
                putchar(',');
                putchar(' ');
            }
        }
    }

    putchar('\n');

    return 0;
}

