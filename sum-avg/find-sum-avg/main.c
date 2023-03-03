/*
    Author: Tareq Islam
    Description:
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 3,num2 = 3,num3 = 6, sum;
    int avg;
    printf("Input numbers %d, %d, %d\n", num1, num2, num3);
    printf("Sum = %d\n", sum = num1 + num2 + num3);
    avg = sum / 3;
    printf("Avg = %d", avg);
    return 0;
}
