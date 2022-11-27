/*7. Write a program to convert temperature from degree centigrade to 
Fahrenheit.*/

#include<stdio.h>
void main()
{
	int C;
	float F;
	printf("Enter the value of centigrade c=");
	scanf("%d",C);
	F=(C*9/5)+32;
	printf("The value converted value in Fahrenheint=%f",F);
	
 } 
