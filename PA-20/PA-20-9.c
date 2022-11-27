/*f. write a program you have to print the table of given number. */

#include<stdio.h>
 void main()
  {
  	  int a,n;
  	  printf("Enter the value of n=");
  	  scanf("%d",&n);
  	  for(a=1;a<=10;a++)
  	    {
  	    	printf("%dx%d=%d\n",n,a,n*a);
		  }
  }

