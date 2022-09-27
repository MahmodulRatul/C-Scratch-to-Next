#include<stdio.h>
// C program to detect A string is comment or not.
void main()
{
    char text[30];
    printf("Enter the text: ");
    gets(text);
    for(int i=0;i<=29;i++)
    {
        if((text[0] == '/')&&(text[1] == '*'))
        {
            if ((text[i]=='*')&&(text[i+1]=='/'))
            {
                printf(" It's a comments");
            }

        }
        else if (text[0] == '/')
        {
            if(text[1] == '/')
            {
                printf(" It's a comments");
            }
            break;
        }
        else
        {
            printf(" It's not a comments");
        }
    }
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.
