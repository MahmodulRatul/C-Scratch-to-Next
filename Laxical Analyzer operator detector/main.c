//A C program to simulate lexical analyzer for validating operators.
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    char in[3];
    while(1)
    {
    printf("\nEnter your input: ");
    gets(in);
    switch(in[0])
    {
    case '<':
        if (in[1]==NULL)
            printf("Entered input is Less than");
        else if(in[1]=='='&&in[2]==NULL)
            printf("Entered input is less or equals");
        else
            printf("Entered input is not an  operator");
        break;
    case '>':
        if (in[1]==NULL)
            printf("Entered input is Greater than");
        else if(in[1]=='='&&in[2]==NULL)
            printf("Entered input is Greater or equals");
        else
            printf("Entered input is not an  operator");
        break;
    case '=':
        if (in[1]==NULL)
            printf("Entered input is Assignment operator");
        else if(in[1]=='='&&in[2]==NULL)
            printf("Entered input is Equals");
        else
            printf("Entered input is not an  operator");
        break;
    case '+':
        if (in[1]==NULL)
            printf("Entered input is Addition operator");
        else if(in[1]=='+'&&in[2]==NULL)
            printf("Entered input is Increment");
        else
            printf("Entered input is not an  operator");
        break;
    case '-':
        if (in[1]==NULL)
            printf("Entered input is Subtraction");
        else if(in[1]=='-'&&in[2]==NULL)
            printf("Entered input is Decrement");
        else
            printf("Entered input is not an  operator");
        break;
    case '&':
        if (in[1]==NULL)
            printf("Entered input is Bitwise AND");
        else if(in[1]=='&'&&in[2]==NULL)
            printf("Entered input is And operator");
        else
            printf("Entered input is not an  operator");
        break;
    case '|':
        if (in[1]==NULL)
            printf("Entered input is Bitwise OR");
        if (in[1]=='|'&&in[2]==NULL)
            printf("Entered input is OR operator");
        else
            printf("Entered input is not an  operator");
        break;
    case '*':
        if (in[1]==NULL)
            printf("Entered input is Multiplication operator");
        else
            printf("Entered input is not an  operator");
        break;
    case '/':
        if (in[1]==NULL)
            printf("Entered input is Division operator");
        else
            printf("Entered input is not an  operator");
        break;
    case '!':
        if (in[1]=='='&&in[2]==NULL)
            printf("Entered input is Not Equals");
        else
            printf("Entered input is not an  operator");
        break;
    default:
        printf("Entered input is not an  operator");
        break;
    }
    }
    while(0)
    return 0;
}
//program contributed by - Mohammad Mahmodul Kabir Ratul.
