//C program to check grade of a course.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Marks;
    printf("Enter Marks : ");
    scanf("%d",&Marks);
    if (Marks>100)
    printf("Entered Marks is Invalid");
    else if (Marks>=90)
    printf("Grade is A");
    else if (Marks>=85)
    printf("Grade is A-");
    else if (Marks>=80)
    printf("Grade is B");
    else if (Marks>=75)
    printf("Grade is B-");
    else if (Marks>=70)
    printf("Grade is C");
    else if (Marks>=60)
    printf("Grade is D");
    else if (Marks>=50)
    printf("Pass");
    else if (Marks>100)
    printf("Entered Marks Invalid");
    else
    printf("Fail");
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.
