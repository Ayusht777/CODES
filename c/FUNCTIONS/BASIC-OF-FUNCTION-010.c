//isgraph()
// it check wheather a char is a gharphic char 
// All graphic characters in C programming are: 
//! " # $ % & ' ( ) * + , - . /
// 0 1 2 3 4 5 6 7 8 9 : ; < = > ? @ A B C D E F G H I J K L M N O P Q R S T U V W X Y Z 
//[ \ ] ^ _ ` a b c d e f g h i j k l m n o p q r s t u v w x y z { | } ~
#include<stdio.h>
#include<ctype.h>
int main()
{
  char x;
  x = '1';
  if(isgraph(x))
     printf("\nIT IS A GHARPHIC CHAR ");
    else
     printf("\nIT IS NOT A GHARPHIC CHAR ");
     x ='a';
    if(isgraph(x))
     printf("\nIT IS A GHARPHIC CHAR ");
    else
     printf("\nIT IS NOT A GHARPHIC CHAR ");
     x=' ';
     if(isgraph(x))
     printf("\nIT IS A GHARPHIC CHAR ");
    else
     printf("\nIT IS NOT A GHARPHIC CHAR ");


}