//A C program for add, subtract, multiplication, division of two number.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Enter The 1st number: ");
    scanf("%d",&x);
    printf("Enter The 2nd number: ");
    scanf("%d",&y);
//Addition.....
    printf("Addition of %d and %d is: %d\n",x,y,x+y);
//Subtraction.....
    if((x>y)||(x==y))
    {
        printf("Subtraction of %d and %d is: %d\n",x,y,x-y);
    }
    else
        {
            printf("Subtraction of %d and %d is: %d\n",y,x,y-x);
        }
//Multiplication.....
    printf("Multiplication of %d and %d is: %d\n",x,y,x*y);
//Division.....
    if((x>y)||(x==y))
    {
        printf("Quotient after dividing %d by %d is: %.2f\n",x,y,(float)x/y);
    }
    else
    {
        printf("Quotient after dividing %d by %d is: %.2f\n",y,x,(float)y/x);
    }
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL - AIUB (19-1).
