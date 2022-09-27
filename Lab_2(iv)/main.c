//C program that takes one integer variable as input from the user and checks if it is even.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit;
    printf("Enter Number: ");
    scanf("%d",&digit);
    if(digit%2==0)
    {
    printf("%d is an even number.\n",digit);
    }
    else
    {
    printf("%d is not an even number.\n",digit);
    }
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.
