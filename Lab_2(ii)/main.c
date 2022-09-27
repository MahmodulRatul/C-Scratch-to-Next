//C program for divide an integer by another integer and show result in float.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    printf("Enter Number 1: ");
    scanf("%d",&num1);
    printf("Enter Number 2: ");
    scanf("%d",&num2);
    printf("Quotient after dividing %d by %d is: %.2f\n",num1,num2,(float)num1/num2);
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.
