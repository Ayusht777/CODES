//Q4-Write-a-program-in-C-to-find-the-sum-of-the-series-1!/1+2!/2+3!/3+4!/4+5!/5-using-the-function.c
/*
Expected Output :

 The sum of the series is : 34 
*/
#include<stdio.h>
int ss(int );
int main()
{
    int y;
    printf("\nENTER A NUMBER:");
    scanf("%d",&y);
    ss(y);
}
int ss(int x)
{
    int f=1,s=0,z=x;
    int a =x;
    for(int i=0;i<a;i++)
    {
        x=z;
        f =1;
        while(x>0)
        {
            f= f*x;
            x--;
        }
        
        printf("\n%d",f);
         s = s + f/z;
         z--;
         
    }
    printf("\nTHE SUM = %d",s);

}