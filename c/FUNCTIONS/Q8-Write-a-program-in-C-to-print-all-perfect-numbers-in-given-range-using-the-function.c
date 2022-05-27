//Q8-Write-a-program-in-C-to-print-all-perfect-numbers-in-given-range-using-the-function.c
#include<stdio.h>
int per(int );
void perc(int ,int );

int main()
{
    int x,y;
    printf("\nENTER SARTING NUMBER :");
    scanf("%d",&x);
    printf("\nENTER ENDING NUMBER:");
    scanf("%d",&y);
    perc(x,y);
}

int per(int a1)
{
       
    int i, sum=0;
     
     for(i=1; i<a1; i++)
    {
        if(a1 % i == 0)
        {
            sum += i;
        }
    }

    if(sum == a1)
        return 1;
    else
        return 0;

}
void perc(int x1,int y1)
{
 while(x1<=y1)
 {
     if(per(x1))
     {
         printf("\n%d ",x1);
     }
     x1++;
 }

}