/*42. Write a program to find out the max number from given array using function */
#include<stdio.h>
 
 void max()
 {  
 
 int a[4]={1,2,8,11};
 int i;
     int max2=0;
      for(i=0;i<4;i++)
      {
      	if(a[i]>max2)
		  {
      		max2=a[i];
		  }
		  
	  }
	  printf("The max number of the array is :%d",max2);
}
 	void main()
 	{
 		max();
	 }
 	
 
