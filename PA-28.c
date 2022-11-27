/* Write a program to print the Matrix using 2-D Array */
#include<stdio.h>
void main()
{ int i,j;
  int a[i][j];
  for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		scanf("%d\t",&a[i][j]);
	  }
	  printf("\n");
	  
  }
  printf("The 2-D array matrix is :\n");
   for(i=0;i<2;i++)
  {
  	for(j=0;j<2;j++)
  	{
  		printf("%d\t",a[i][j]);
	  }
	 printf("\n");
  }
  
}
