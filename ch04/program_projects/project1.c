/*
    project1.c  
    Ask for two digit integer.  print the number with the digits reversed. 
    08/25/2024

*/

#include <stdio.h>

int main(void)
{
    int num, digit1, digit2;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    digit1 = num / 10;
    digit2 = num % 10;

    printf("The reversal is: %d%d\n", digit2, digit1);

    return 0;
}