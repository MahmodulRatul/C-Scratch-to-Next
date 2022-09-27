//A C program to check 2 strings are containing same number of vowels, consonant and words or not.
#include <stdio.h>
int main()
{
    char S1[150];
    char S2[150];
    int vowels1, consonant1, space1, vowels2, consonant2, space2;
    vowels1 = consonant1= space1 = vowels2 = consonant2 = space2 = 0;

    printf("Enter 1st string: ");
    fgets(S1, sizeof(S1), stdin);
    printf("Enter 2nd string: ");
    fgets(S2, sizeof(S2), stdin);

    for (int i = 0; S1[i] != '\0'; ++i)
    {
        if (S1[i] == 'a' || S1[i] == 'e' || S1[i] == 'i' || S1[i] == 'o' || S1[i] == 'u' || S1[i] == 'A' || S1[i] == 'E' || S1[i] == 'I' || S1[i] == 'O' || S1[i] == 'U')
        {
            ++vowels1;
        }
        else if ((S1[i] >= 'a' && S1[i] <= 'z') || (S1[i] >= 'A' && S1[i] <= 'Z'))
        {
            ++consonant1;
        }
        else if (S1[i] == ' ')
        {
            ++space1;
        }
    }

    for (int i = 0; S2[i] != '\0'; ++i)
    {
        if (S2[i] == 'a' || S2[i] == 'e' || S2[i] == 'i' || S2[i] == 'o' || S2[i] == 'u' || S2[i] == 'A' || S2[i] == 'E' || S2[i] == 'I' || S2[i] == 'O' || S2[i] == 'U')
        {
            ++vowels2;
        }
        else if ((S2[i] >= 'a' && S2[i] <= 'z') || (S2[i] >= 'A' && S2[i] <= 'Z'))
        {
            ++consonant2;
        }
        else if (S2[i] == ' ')
        {
            ++space2;
        }
    }
    if(vowels1==vowels2 && consonant1==consonant2 && space1==space2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
//Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.
