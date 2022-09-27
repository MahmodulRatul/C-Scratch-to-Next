//C program to access a file from root directory.
#include <stdio.h>
#include <stdbool.h>
int main()
{
    bool x=true;
    while(x)
    {
        char name[20];
        char id[20];
        int marks,n;
        printf("Enter number of data to store: ");
        scanf("%d",&n);
        if(n==0)
        {
            x=false;
            printf("Nothing to input !!\nExiting ... ... ... ...");
        }
        FILE *fp;
        fp=(fopen("My-File.txt","w"));
        if(fp==NULL)
        {
            printf("Could not create file!!");
            exit(1);
        }
        for (int i=0;i<n;++i)
        {
            printf("\nFor student %d:\nEnter name: ",i+1);
            scanf("%s",name);
            printf("Enter ID: ");
            scanf("%s",id);
            printf("Enter marks: ");
            scanf("%d",&marks);
            fprintf(fp,"Student %d :\n  Name  : %s\n  ID    : %s\n  Marks = %d \n\n",i+1,name,id,marks);
        }
        printf("\n%d Student's data stored into My-File.txt Successfully\n",n);
        fclose(fp);
    }
    while(x)
	{
	    return 0;
    }
}
// Program Contributed by MOHAMMAD MAHMODUL KABIR RATUL.
