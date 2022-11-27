/*14. Write a program to find the Max number from the given three number 
using Ternary Operator*/
#include<stdio.h>
 void main()
 {
 	int a,b,c;
 	printf("Enter the number of three values a b c:");
 	scanf("%d %d %d",&a,&b,&c);
 	if(a<b)
 	{ if(b>c? printf("Max nu is %d",b): printf("Max nu is %d",c));
	 }
	 else if(a>b)
	 {
	 	if(a<c? printf("Max nu is %d",c) : printf("Max nu is %d",));
	  } 
}
