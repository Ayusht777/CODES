//Q9.Write a program in C to count total number of vowel or consonant in a string.
#include<stdio.h>
#include<string.h>
void main()
{
         char x[50];
         printf("program to count total number of vowel or consonant in a string");
         printf("\nENTER THE STRING:");
         fgets(x,sizeof x,stdin);
         int i,v,c;
         v=c=0;
         while(x[i]!='\0')
         {
                  if((x[i]=='a'||x[i]=='A')||(x[i]=='e'||x[i]=='E')||(x[i]=='i'||x[i]=='I')||(x[i]=='o'||x[i]=='O')||(x[i]=='u'||x[i]=='U'))
                  {
                           v++;
                  }
                  else if((x[i]!='a'&&x[i]!='A')&&(x[i]!='e'||x[i]!='E')&&(x[i]!='i'||x[i]!='I')&&(x[i]!='o'||x[i]!='O')&&(x[i]!='u'||x[i]!='U'))
                  {
                           if(x[i]>='a'&&x[i]<='z'||x[i]>='A'&&x[i]<='Z')
                             {c++;
                             }
                  }
                  i++;
         }
         printf("\nTHE TOTAL NUMBER OF VOWELS ARE :%d",v);
         printf("\nTHE TOTAL NUMBER OF CONSONANT ARE :%d",c);
}

