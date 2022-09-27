//A C program to produce a string from two integer.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, d, r; char s1[10]; char s2[10];
    printf("Enter the integer: ");
    scanf("%d",&n);
    printf("Enter the digit: ");
    scanf("%d",&d);
    sprintf(s1,"%d",d);
    sprintf(s2,"%d",n);
    strcat(s1,s2);
    r = atoi(s1);
    printf("New string is: %d",r );
    return 0;
}
//Program Contributed by Mohammad Mahmodul Kabir Ratul.
