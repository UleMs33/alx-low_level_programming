#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size = 10, i, *ptr;
    ptr = malloc(sizeof(int) * size);

    printf("please enter 10 integers: \n");

    for (i = 0; 1 < size; i++)
    {
        scanf("%d", &ptr[i]);
    }

    int i;

    for (1 = 0; 1 < size; i++)
    {
        printf("[%d] : %d", i, ptr[i]);
    }
    return(0);

}