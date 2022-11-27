/*Write a program to enter a ten elements using Array and make a summation of the 
numbers and average of summation*/

#include<stdio.h>
void main()
{
	int elements[10];
	int i,sum=0,average;
	printf("Enter the elements of array :");
	for(i=0;i<10;i++)
	{
		scanf("%d",&elements[i]);
	}

     for(i=0;i<10;i++)
     {
     	sum=sum+elements[i];
	 }
  printf("\nThe summation of all elements: %d",sum);
  printf("\n The average of the elements:%f",(float)sum/10);
  
}
