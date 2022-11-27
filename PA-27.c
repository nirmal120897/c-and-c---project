/*Write a program to find out the second smallest number from the array.*/
#include<stdio.h>
void main()
{  int i,j,temp;
	int a[5]={1,3,2,4,5};
 	int b[5]={1,2,4,3,5};
  for(i=0;i<5;i++)
 	{
 		for(j=i+1;j<5;j++)
 		{
 			if(b[i]>b[j]){
 				temp=b[i];
 				b[i]=b[j];
 				b[j]=temp;
			 }
		 
	 }
    }
	 printf("\nThe acending orders of the given array is:");
	 for(j=0;j<5;j++)
	  {
	  	printf("%d",b[j]);
	  }
	    
	 	
}
