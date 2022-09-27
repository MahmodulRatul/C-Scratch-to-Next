//A C program to do insertion operation into an array.
#include <stdio.h>

void main ()
{
    int size = 5;
    float marks [ size ];
    /* Inserting marks into marks array */
    int i;
    for (i = 0; i < size ; i++)
    {
        printf ("Enter a mark : ");
        scanf ("%f", & marks [i]);
    }
    for (i = 0; i < size ; i++)
    {
        printf ("Mark[%d] : %.2f\n",i,marks[i]);
    }
}
//Program contributed by MOHAMMAD MAHMODUL KABIR RATUL - (AIUB,19-1)
