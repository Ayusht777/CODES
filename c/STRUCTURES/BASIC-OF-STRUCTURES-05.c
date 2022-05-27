//ARRAY AND STRUCTERS
//we can also create structure  array to store multiple value
#include<stdio.h>
struct x
{
    char name[50];
    char add[100];
    int sr;
};
int main()
{
    struct x ar[2];
    int i;
    printf("\nENTER THE INFO");
    for(i=0;i<2;i++)
    {
        printf("\n%d",i+1);
        printf("\nENTER YOUR NAME:");
        gets(ar[i].name);
        printf("\nENTER YOUR ADDRESS:");
        gets(ar[i].add);
        printf("\nENTER YOUR NUMBER(10-DIGIT):");
        scanf("%d",&ar[i].sr);
    }
    printf("\n");
     printf("\nNAME\t\tADDRESS\t\tNUMBER");
    for(i=0;i<2;i++)
    {
       
        printf("\n%s\t\t%s\t\t%d",ar[i].name,ar[i].add,ar[i].sr);

    }
}