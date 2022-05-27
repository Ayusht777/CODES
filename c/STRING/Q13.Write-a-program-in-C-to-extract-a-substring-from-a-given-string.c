//Q13 Write a program in C to extract a substring from a given string

#include<stdio.h>
#include<string.h>
void main()
{
         char str[50],strr[50];
         printf("ENTER THE STRING:");
         fgets(str,sizeof str,stdin);
         int b =0;
         printf("\nTHE STRING IS :%s",str);

         int s,l;
         printf("\nInput the position to start extraction:");
         scanf("%d",&s);

         printf("\nInput the length of substring:");
         scanf("%d",&l);


         while(b<l)
         {
                  strr[b]=str[s+b-1];
                  b++;
         }
         strr[b]='\0';

         printf("\n%s",strr);


}
