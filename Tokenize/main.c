//A C program for tokenize a string.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char x[50];
    printf("Enter your input: ");
    gets(x);
    for (int i=0; i<strlen(x); i++)
    {
        if((x[i]=='-')||(x[i]==' '))
            printf("\n");
        else
            printf("%c",x[i]);
    }
    return 0;
}
//Program Contributed by MOHAMMAD MDMAHMODUL KABIR RATUL.
