//C program that adds all the even numbers up to n.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0,i=1,n;

    printf("Enter n : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("The Summation of the even numbers from 1 to %d is : %d\n",n,sum);
}
//Program contributed by MOHAMMAD MAHMODUL KABIR RATUL - (AIUB,19-1)
