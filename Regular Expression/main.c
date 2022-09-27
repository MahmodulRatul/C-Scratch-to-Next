//A C program to detect a given regular expression is matched or not.
#include <stdio.h>
#include <string.h>
int main()
{
    char ans;
    do {
            char expression[15], text[15];
            int expressionlength, textlength, run = 1;
            printf("Enter the Regular Expression: ");
            gets(expression);
            printf("Enter the text: ");
            gets(text);
            expressionlength = sizeof(expression)/sizeof(char);
            textlength = sizeof(text)/sizeof(char);
            if((expression[0] >= 60 && expression[0] <=90) || (expression[0] >= 97 && expression[0] <= 122))
            {
                int j = 0, flag = 0, i = 0;
                while(expression[i] != '\0')
                {
                    if(run == 1)
                    {
                        run = 0;
                    }
                    if(expression[i] == text[j])
                    {
                        flag = 0;
                    }
                    else if(expression[i] != text[j] && expression[i+1] == '*')
                    {
                        j--;
                        i++;
                    }
                    else if(expression[i-1] == text[j] && expression[i] == '*')
                    {
                        while(text[j] == expression[i-1] )
                        {
                            j += 1;
                        }
                        j--;
                    }
                    else if(expression[i - 1] == text[j] && expression[i] == '+')
                    {
                        while(text[j] == expression[i-1] )
                        {
                            j += 1;
                        }
                        j--;
                    }
                    else if(expression[i] == '|' && flag != 1)
                    {
                        break;
                    }
                    else if(expression[i] == '|' && flag == 1)
                    {
                        flag = 0;
                        j--;
                    }
                    else
                    {
                        flag = 1;
                        j--;
                    }
                    i++;
                    j++;
                }

                if(flag == 0 && run == 0)
                {
                    printf("\nText Matched with the expression.");
                }
                else if(text[0] == '\0')
                {
                    int a = 0, s = 0, k = 0;
                    while(expression[k] != '\0')
                    {
                        if((expression[k] >= 60 && expression[k] <=90) || (expression[k] >= 97 && expression[k] <= 122))
                        {
                            a++;
                        }
                        else if(expression[k] == '*')
                        {
                            s++;
                        }
                        k++;
                    }
                    if(a == s)
                        printf("\nText Matched with the expression.");
                    else
                        printf("\nText doesn't Matched with the expression.");
                }
                else
                {
                    printf("\nText doesn't Matched with the expression.");
                }
            }
            else
            {
                printf("\nInvalid Expression.");
            }
        printf("\nPress 'Y' to continue, any key to exit. ");
        scanf(" %c", &ans);
        getchar();
    } while (ans == 'Y' || ans == 'y');
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.
