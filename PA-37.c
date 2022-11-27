/*Write a program to make string reverse and check the given string is palindrome or 
not without using string function*/

#include<stdio.h>
 void main ()
 { int i;
    char str[]="jnjknj";
    char Str[100];
    strcpy(Str,str);
    strrev(Str);
   if(strcmp(str,Str)==0){
   	printf("string is palindrome");
   }
   else{
   	printf("string is not palindrome");
   }
    
 }
