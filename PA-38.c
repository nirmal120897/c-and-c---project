/*write a program to find out the Square and cube of given number using function*/
#include<stdio.h>
void Square(int a)
{
	printf("\nThe square of the given number is :%d",a*a);
}

void cube(int a)
{
	printf("\nThe cube of the given number is :%d",a*a*a);
}

void main()
{
	Square(4);
	cube(5);
}
