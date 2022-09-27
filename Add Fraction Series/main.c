//A C program for sum a fractional series (1-(1/2^3)+(1/3^3)-(1/4^3)+........) up to N.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int N,i;
    float sum=0;
    printf("Enter N : ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        if(i%2==0)
        {
            sum=sum-(1/pow(i,3));
        }
        else
        {
            sum=sum+(1/pow(i,3));
        }
    }
    printf("Summation of the series is %.3f",sum);
    return 0;
}
//Program contributed by Mohammad Mahmodul Kabir Ratul.
