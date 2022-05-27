//BASIC-OF-STRUCTURES-07.c
//Dynamic memory allocation of structs
/*
Sometimes, the number of struct variables you declared may be insufficient.
 You may need to allocate memory during run-time.
 Here's how you can achieve this in C programming.
*/
//syntax ptr = (struct name*)calloc(n,sizeof(struct name));
//ptr shpuld be structure pointer
#include<stdio.h>
struct data
{
    char name [100];
    int age;
};
int main()
{
    //only we requires struture pointer 
    struct data *p;
    int i,n;
    printf("\nENTER THE SIZE OF STRUCTURE:");
    scanf("%d",&n);
    p = (struct data*)calloc(n,sizeof(struct data));
    if(n<0||p==NULL)
    {
        printf("\nSTUCTURE DOESNOT CREATED");
    }
    else
    {
        for(i=0;i<n;i++)
        {
            printf("\nENTER THE INFO FOR %d STRUCTER",i+1);
            printf("\nENTER THE NAME:");
            gets((p+i)->name);
            printf("\nENTER THE AGE:");
            scanf("%d",&(p+i)->age);
            }
            
    }

}