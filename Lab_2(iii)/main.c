//A C program that take two integer variable as input from the user. If variable a is greater or equal to variable b output is 1 else output is 0.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int a,b;
    printf("Enter Number 1: ");
    scanf("%d",&a);
    printf("Enter Number 2: ");
    scanf("%d",&b);
    a>=b? printf("1"):printf("0");
    printf("\n");
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.
