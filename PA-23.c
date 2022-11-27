/*Write a program to enter a ten elements using Array and find out the to count the 
total number of odd and even numbers */
#include<stdio.h>
void main()
{
	int elements[10];
	int i,evenno=0,oddno=0;
	printf("Enter the elements of array :");
	for(i=0;i<10;i++)
	{
		scanf("%d",&elements[i]);
	}

	for(i=0;i<10;i++)
	{
		if(elements[i]%2==0)
		{
		    evenno++;  
		}
		else{
			
			oddno++;
		}
	}
	
	printf("\nTotal evenno is %d",evenno);
	printf("\nTotal oddno no is %d",oddno);
	
}


