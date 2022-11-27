/*	write a program to sort the array using function*/
#include<stdio.h>

void sort()
{
	int i;
	int a[4]={1,2,3,4};
	int temp;
	for(i=0;i<4;i++)
	{
		if(a[i]<a[i+1])
		{
		temp=a[i+1];
		a[i+1]=a[i];
		a[i]=temp;	
		}
	}
	printf("The sorted array is : ");
	for(i=0;i<4;i++)
	{
		printf("%d",a[i]);
	}
}

  void main()
  {
  	sort();
  }
