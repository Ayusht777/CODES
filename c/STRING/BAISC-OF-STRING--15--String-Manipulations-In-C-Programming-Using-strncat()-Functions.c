//String Manipulations In C Programming Using strncat() Functions
//syntax : strncat( destination,source, size_t num )
#include<stdio.h>
#include<string.h>
void main()
{
         char s[50],d[50];
         printf("PROGRAM TO JOIN TWO STRING WITH A CERTAIN CHARACTERS TO IT");
         printf("\n----------------------------------------------------------");
         printf("\nENETR FIRTS STRING:");
         fgets(s,sizeof(s),stdin);
         printf("\nENETR SECOND STRING:");
         fgets(d,sizeof(d),stdin);
         printf("\n----------------------------------------------------------");
         int n,z;
         z = strlen(d) -1;
         printf("\nTHE LENGTH OF SECOND STRING:%d",z);
         printf("\nENTER SIZE OF LETTER YOU WANT TO ADD:");
         scanf("%d",&n);
          strncat(s,d,n);
         printf("\nTHE FIRST STRING %s",s);
         printf("\nTHE SECOND STRING %s",d);
         printf("\nTHE FINAL STRING %s",s);

}
