 //String Manipulations In C Programming Using strcat() Functions
 // syntax : strcat(destination array,source array)
 #include<stdio.h>
 #include<string.h>
void main()
{
         char d[50],s[50];
         printf("ENTER STRING FIRTS:");
         fgets(s,sizeof(s),stdin);
         printf("\nENTER STRING SECOND:");
         fgets(d,sizeof(d),stdin);
         printf("\nSTRING FIRTS:%s \nSTRING SECOND:%s",s,d);

         printf("\nTHE COMBINE STRING %s",strcat(s,d));
         //Note: When we use strcat(), the size of the destination string should be large enough to store the resultant string.
         //If not, we will get the segmentation fault error.

}
