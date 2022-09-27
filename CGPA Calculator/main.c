// A C program that calculates the CGPA of a student who is in 1st Semester.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float credit=3.00;
    float gpa_phy1,gpa_math1,gpa_ec1,gpa_eng;
    printf("Enter GPA of Electric Circuits 1 (out of 4) : ");
    scanf("%f",&gpa_ec1);
    printf("Enter GPA of Math 1 (out of 4)              : ");
    scanf("%f",&gpa_math1);
    printf("Enter GPA of Physics 1 (out of 4)           : ");
    scanf("%f",&gpa_phy1);
    printf("Enter GPA of English (out of 4)             : ");
    scanf("%f",&gpa_eng);
    if((gpa_ec1>4)||(gpa_eng>4)||(gpa_math1>4)||(gpa_phy1>4))
    {
        printf("GPA of any subject can be maximum 4.00");
        exit(1);
    }
    float CGPA =((gpa_ec1*credit)+(gpa_phy1*credit)+(gpa_math1*credit)+(gpa_eng*credit))/(credit*4);
    printf("The Calculated CGPA of 1st semester is : %.2f (out of 4.00)",CGPA);
    return 0;
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.
