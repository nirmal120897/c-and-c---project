/*23. Write a program to find out the max number from given 10 elements of array.*/

#include<stdio.h>
void main()
{
	int elements[10];
	int i,max=0;
	printf("Enter the elements of array :");
	for(i=0;i<10;i++)
	{
		scanf("%d",&elements[i]);
	}
	
	for(i=0;i<10;i++)
	{
		if(elements[i]<elements[i+1]){
			max=elements[i+1];
		}
	}
	
	printf(" max no is=%d",max);
}


