/**
 * In the next exercise, you will need to create a program which prints out the sum of the numbers a, b, and c
*/

#include <stdio.h>

double sum(int x, float y, double z)
{
    double total = 0;
    total = (x + y + z);
    return(total);
}

int main()
{
    int a = 3;
    float b = 4.5;
    double c = 5.25;

    double prt =sum(a, b, c);
    printf("%f", prt);

    return(0);
}