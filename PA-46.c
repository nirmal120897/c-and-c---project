/* Write a program of structure for five employee that provides the following 
information 
-print and display empno,empname,address and age*/
#include<stdio.h>

struct employer{
	int empno;
	char empname[10];
	char address[10];
	int age;
	
}s[4];

void main()
{
	printf("Enter the detail of the  1 employer :");
	printf("\nEnter the number of the employer:");
	scanf("%d",&s[0].empno);
	printf("\nEnter the employer name :");
	scanf("%s",&s[0].empname);
	printf("\nEnter the employer address :");
	scanf("%s",&s[0].address);
	printf("\nEnter the employer age :");
	scanf("%d",&s[0].age);
	
	printf("Enter the detail of the 2 employer :");
	printf("\nEnter the number of the employer:");
	scanf("%d",&s[1].empno);
	printf("\nEnter the employer name :");
	scanf("%s",&s[1].empname);
	printf("\nEnter the employer address :");
	scanf("%s",&s[1].address);
	printf("\nEnter the employer age :");
	scanf("%d",&s[1].age);
	
	printf("Enter the detail of the 3 employer :");
	printf("\nEnter the number of the employer:");
	scanf("%d",&s[2].empno);
	printf("\nEnter the employer name :");
	scanf("%s",&s[2].empname);
	printf("\nEnter the employer address :");
	scanf("%s",&s[2].address);
	printf("\nEnter the employer age :");
	scanf("%d",&s[2].age);
	
	printf("Enter the detail of the 4 employer :");
	printf("\nEnter the number of the employer:");
	scanf("%d",&s[3].empno);
	printf("\nEnter the employer name :");
	scanf("%s",&s[3].empname);
	printf("\nEnter the employer address :");
	scanf("%s",&s[3].address);
	printf("\nEnter the employer age :");
	scanf("%d",&s[3].age);
	
	printf("Enter the detail of the 5 employer :");
	printf("\nEnter the number of the employer:");
	scanf("%d",&s[4].empno);
	printf("\nEnter the employer name :");
	scanf("%s",&s[4].empname);
	printf("\nEnter the employer address :");
	scanf("%s",&s[4].address);
	printf("\nEnter the employer age :");
	scanf("%d",&s[4].age);
	
	
		printf("---the detail of the 1 employer---");
	
	printf("\nThe employer age is :%d",s[0].age);
	printf("\nThe employer number is :%d",s[0].empno);
	printf("\nThe employer name is :%s",s[0].empname);
	printf("\nThe employer address is :%s",s[0].address);	
	
		printf("---the detail of the 2 employer---");
	
	printf("\nThe employer age is :%d",s[1].age);
	printf("\nThe employer number is :%d",s[1].empno);
	printf("\nThe employer name is :%s",s[1].empname);
	printf("\nThe employer address is :%s",s[1].address);	
	
		printf("---the detail of the  3 employer---");
	
	printf("\nThe employer age is :%d",s[2].age);
	printf("\nThe employer number is :%d",s[2].empno);
	printf("\nThe employer name is :%s",s[2].empname);
	printf("\nThe employer address is :%s",s[2].address);	
	
		printf("---the detail of the 4 employer---");
	
	printf("\nThe employer age is :%d",s[3].age);
	printf("\nThe employer number is :%d",s[3].empno);
	printf("\nThe employer name is :%s",s[3].empname);
	printf("\nThe employer address is :%s",s[3].address);	
	
		printf("---the detail of the 5  employer---");
	
	printf("\nThe employer age is :%d",s[4].age);
	printf("\nThe employer number is :%d",s[4].empno);
	printf("\nThe employer name is :%s",s[4].empname);
	printf("\nThe employer address is :%s",s[4].address);	
}


