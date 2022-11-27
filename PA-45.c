/*Write a program of structure employee that provides the following information 
-print and display empno,empname,address and age*/
#include<stdio.h>
struct employer{
	int empno;
	char empname[10];
	char address[10];
	int age;
	
}s[0];

void main()
{
	printf("Enter the detail of the employer :");
	printf("\nEnter the number of the employer:");
	scanf("%d",&s[0].empno);
	printf("\nEnter the employer name :");
	scanf("%s",&s[0].empname);
	printf("\nEnter the employer address :");
	scanf("%s",&s[0].address);
	printf("\nEnter the employer age :");
	scanf("%d",&s[0].age);
	
	printf("---the detail of the employer---");
	
	printf("\nThe employer age is :%d",s[0].age);
	printf("\nThe employer number is :%d",s[0].empno);
	printf("\nThe employer name is :%s",s[0].empname);
	printf("\nThe employer address is :%s",s[0].address);	
}
