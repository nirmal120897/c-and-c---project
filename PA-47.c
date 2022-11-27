/* Describe the structure student having rollno and marks of three subjects of five 
students.*/

#include<stdio.h>

struct student{
	int roll_no;
	int maths;
	int physics;
	int chemistry;
}s[4];

void main()
{
	printf("\n Enter The first student detail");
	printf("\n Enter the roll no of student:");
	scanf("%d",&s[0].roll_no);
	printf("\n Enter the maths marks of student:");
	scanf("%d",&s[0].maths);
	printf("\n Enter the physics marks of student:");
	scanf("%d",&s[0].physics);
	printf("\n Enter the chemistry marks of student:");
	scanf("%d",&s[0].chemistry);
	
	printf("\n Enter The first student detail");
	printf("\n Enter the roll no of student:");
	scanf("%d",&s[1].roll_no);
	printf("\n Enter the maths marks of student:");
	scanf("%d",&s[1].maths);
	printf("\n Enter the physics marks of student:");
	scanf("%d",&s[1].physics);
	printf("\n Enter the chemistry marks of student:");
	scanf("%d",&s[1].chemistry);
	
	printf("\n Enter The first student detail");
	printf("\n Enter the roll no of student:");
	scanf("%d",&s[2].roll_no);
	printf("\n Enter the maths marks of student:");
	scanf("%d",&s[2].maths);
	printf("\n Enter the physics marks of student:");
	scanf("%d",&s[2].physics);
	printf("\n Enter the chemistry marks of student:");
	scanf("%d",&s[2].chemistry);
	
	printf("\n Enter The first student detail");
	printf("\n Enter the roll no of student:");
	scanf("%d",&s[3].no);
	printf("\n Enter the maths marks of student:");
	scanf("%d",&s[3].maths);
	printf("\n Enter the physics marks of student:");
	scanf("%d",&s[3].physics);
	printf("\n Enter the chemistry marks of student:");
	scanf("%d",&s[3].chemistry);
	
	printf("\n Enter The first student detail");
	printf("\n Enter the roll no of student:");
	scanf("%d",&s[4].no);
	printf("\n Enter the maths marks of student:");
	scanf("%d",&s[4].maths);
	printf("\n Enter the physics marks of student:");
	scanf("%d",&s[4].physics);
	printf("\n Enter the chemistry marks of student:");
	scanf("%d",&s[4].chemistry);
	
	printf("\n---detail of the student---");
	
	printf("\nThe student roll no is :%d",s[0].roll_no);
	printf("\nThe maths marks :%d",s[0].maths);
	printf("\nThe physics marks :%d",s[0].physics);
	printf("\nThe chemistry marks :%d",s[0].chemistry);
	
		printf("\nThe student roll no is :%d",s[1].roll_no);
	printf("\nThe maths marks :%d",s[1].maths);
	printf("\nThe physics marks :%d",s[1].physics);
	printf("\nThe chemistry marks :%d",s[1].chemistry);
	
		printf("\nThe student roll no is :%d",s[2].roll_no);
	printf("\nThe maths marks :%d",s[2].maths);
	printf("\nThe physics marks :%d",s[2].physics);
	printf("\nThe chemistry marks :%d",s[2].chemistry);
	
		printf("\nThe student roll no is :%d",s[3].roll_no);
	printf("\nThe maths marks :%d",s[3].maths);
	printf("\nThe physics marks :%d",s[3].physics);
	printf("\nThe chemistry marks :%d",s[3].chemistry);
	
		printf("\nThe student roll no is :%d",s[4].roll_no);
	printf("\nThe maths marks :%d",s[4].maths);
	printf("\nThe physics marks :%d",s[4].physics);
	printf("\nThe chemistry marks :%d",s[4].chemistry);
	
	
	
}
