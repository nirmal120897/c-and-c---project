/*13. Write a program to find the Max number from the given three number 
using Nested If*/
#include<stdio.h>
 void main()
 {
 	int a,b,c;
 	printf("Enter the value of a: ");
 	scanf("%d",&a);
 	printf("\nEnter the value of b: ");
 	scanf("%d",&b);
 	printf("\nEnter the value of c: ");
 	scanf("%d",&c);
 	if(a>b)
 	{
 		if(a>c){
 			printf("a is max no of three given numbers");
		 }
		 else{
		    printf("c is a max no of three given numbers");}
		 
	 }
	 else(b>c){
	 	printf("%d is a greater than three number",b);
	 }
	 
	 
 }
