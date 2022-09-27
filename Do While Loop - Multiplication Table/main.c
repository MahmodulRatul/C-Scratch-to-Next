//C program to implementation of do-while loop
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Enter Starting point i [0-60] : ");
    scanf("\t%d",&i);
    do
    {
        i++;
        printf("%d : Hello world!\n",i);
    }
    while(i<60);
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.
