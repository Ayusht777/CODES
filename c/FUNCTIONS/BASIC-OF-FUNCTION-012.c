//isprint()
//Those characters that occupies printing space are known as printable characters.

//Printable characters are just the opposite of control characters which can be checked using iscntrl().
//The printable characters are: 
// ! " # $ % & ' ( ) * + , - . / 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ 
//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z [ \ ] ^ _ `
// a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~ 
// is the similar to gharphical char 
#include<stdio.h>
#include<ctype.h>
int main()
{
  char x;
  x = '1';
  if(isprint(x))
     printf("\nIT IS A PRINTABLE CHAR ");
    else
     printf("\nIT IS NOT A PRINTABLE CHAR ");
     x ='a';
    if(isprint(x))
     printf("\nIT IS A PRINTABLE CHAR ");
    else
     printf("\nIT IS NOT A PRINTABLE CHAR ");
     x='\n';
     if(isprint(x))
     printf("\nIT IS A PRINTABLE CHAR ");
    else
     printf("\nIT IS NOT A PRINTABLE CHAR ");

}