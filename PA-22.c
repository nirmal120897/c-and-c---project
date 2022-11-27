#include<stdio.h>
void main()
{
	int roll_no[5];
	int i;
	printf("Enter the rollno of student:");
	for(i=0;i<5;i++){
			scanf("%d",&roll_no[i]);
	}
    
    printf("\nEntered students roll no is:");
    
    for(i=0;i<5;i++)
    {
    	printf("%d\n",roll_no[i]);
	}
	
}
