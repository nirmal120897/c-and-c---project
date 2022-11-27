/*  Write a program to perform addition, subtraction, multiplication and division of two 
numbers using Function*/
#include<stdio.h>
void add(int a,int b)
{
	printf("\nThe addtion of two number is :%d",a+b);
}

void sub(int a,int b)
{
 printf("\nThe substraction of two number is :%d",a-b);	
}

void multi(int a,int b)
{
	printf("\nThe multiplication of the two numbers is :%d",a*b);
}

void div(int a,int b)
{
	printf("\nThe division of the two numbers is :%f",(float)a/b);
}
void main()
{   add(10,20);
	sub(10,20);
	multi(10,20);
	div(10,20);
}	
