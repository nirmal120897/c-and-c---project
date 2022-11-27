/*Write a program to find out the factorial of given number using function */
#include<stdio.h>

void factorial(int i)
{ 
 int fact=1;
	for(i=1;i<6;i++)
	{
		fact=fact*i;
	}
	printf(" The factorial of the given number is :%d",fact);
}

 void main()
 {
 	factorial(5);
 }
