/*Write a program to find out the length of given string without using string function

write a program to count the total number of word from given string without using 
string function*/
#include<stdio.h>
void main()
{   int i;
	char str[]="hello";
	for(i=1;str[i]!='\0';i++)
	{
		i++;
	}
   printf("%d",i);
}
