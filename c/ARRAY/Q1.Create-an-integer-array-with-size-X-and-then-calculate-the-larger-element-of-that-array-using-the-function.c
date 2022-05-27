#include <stdio.h>
int main() {
    int n;
    printf("ENTER THE ARRAY SIZE:");
    scanf("%d",&n);
    int x[n];
    int i;
    for(i=0;i<n;i++)
    {
        printf("ENTER THE ELEMENT NO %d :",i+1);
        scanf("%d",&x[i]);

    }
    for(i=0;i<n;i++)
        // we have to just  compare on element to all other element so here we used x[0] it can be any indexing but you do not what is size of array
        // so you can use n-1 here if n=5 than indexing would be 4.
    {
        if(x[0]<x[i])
            x[0]=x[i];

    }

    printf("\nTHE DUPLICATE ELEMENT IS %d:",x[0]);


}
