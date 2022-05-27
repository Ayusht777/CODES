//Q2.Count the frequency of each element of an array
#include<stdio.h>


int main(){
    int n;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int x[n],i;
    for(i=0;i<n;i++)
    {
        printf("ENTER ELEMENT NO %d:",i+1);
        scanf("%d",&x[i]);
    }

    int j,k,z,a[n];
    for(j=0;j<n;j++){
        z=1;

        for(k=0;k<n;k++)
        {
            if(x[j]==x[k]){

                 a[j] = z++;



            }

        }

        printf("\nTHE %d IS %d TIMES",x[j],a[j]);

    }
    for(i=0;i<n;i++){
            if(x[i]!=a[i])
            printf("\nTHE VALUE %d is %d",x[i],a[i]);

    }



}
