//ispunct()
//All punctuations in C: 
//! " # $ % & ' ( ) * + , - . / : ; < = > ? @ [ \ ] ^ _ ` { | } ~
#include<stdio.h>
#include<ctype.h>
int main()
{
  char x;
  x = '!';
  if(ispunct(x))
     printf("\nIT IS A PUNCH CHAR ");
    else
     printf("\nIT IS NOT A PUNCH CHAR ");
     x ='a';
    if(ispunct(x))
     printf("\nIT IS A PUNCH CHAR ");
    else
     printf("\nIT IS NOT A PUNCH CHAR ");
     x='\n';
    if(ispunct(x))
     printf("\nIT IS A PUNCH CHAR ");
    else
     printf("\nIT IS NOT A PUNCH CHAR ");
}