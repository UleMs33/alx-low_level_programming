/**
 * Arrays can only have one type of variable, because they are
 * implemented as a sequence of values in the computer's memory. 
 * Because of that, accessing a specific array cell is very efficient.
*/

#include <stdio.h>

int main()
{
    int numbers[10];
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    numbers[5] = 60;
    numbers[6] = 70;
    numbers[7] = 80;
    numbers[9] = 90;

    printf("The 7th number in the array is %d", numbers[6]);

    return(0);
}
