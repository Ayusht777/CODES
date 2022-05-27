//Q3. Write a program in C to separate odd and even integers in separate arrays.
#include<stdio.h>
int main()
{
    int n;
    printf("ENTER ARRAY SIZE:");
    scanf("%d",&n);
    int x[n];
    int i;

    for(i=0;i<n;i++)
    {
        printf("ENTER THE ELEMENT NO %d:",i+1);
        scanf("%d",&x[i]);
    }

    int a=0,b=0;

    int y[n],z[n];
    for(i=0;i<n;i++)
    {
          if(x[i]%2==0)
           {

            y[a]=x[i];
            a++;
           }


        else
           {

            z[b]=x[i];
            b++;
           }


    }
    printf("\nTHE EVEN NUMBERS :\n");
    for(i=0;i<a;i++)
    {
        if (y[i]%2==0)
        printf("%d\t",y[i]);
    }

    printf("\nTHE ODD NUMBERS :\n");
    for(i=0;i<b;i++)
    {
        printf("%d\t",z[i]);
    }




}
