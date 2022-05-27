//Q27 Write a program in C to split string by space into words

#include<stdio.h>
#include<string.h>
void main()
{
         char x[100],y[10][10];
         printf("program to split string by space into words");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         int i=0,j=0,ctr=0;

         while(x[i]!='\0')
         {
                  if(x[i]==' '||x[i]=='\0')
                  {
                           y[ctr][j] ='\0';
                           ctr++; //for next word
                             j=0;    //for next word, in it index to 0

                  }
                  else{
                           y[ctr][j] =x[i];
                           j++;
                  }
                  i++;



         }
         printf("\n Strings or words after split by space are :\n");
         for(i=0;i < ctr;i++)
        printf(" %s\n",y[i]);
}
