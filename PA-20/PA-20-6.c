/*j. Write a program you have to make a summation of first and last Digit. 
(E.g. 1234 ans:-5)*/

#include<stdio.h>
 void main()
  {
  	 int no=1234,rem1,rem;
  	 rem=no%10;
  	 while(no!=0)
  	   { rem1=no%10;
  	     no=no/10;
  	   	 
	   }
  	  
  	  printf("sum of first and last no=%d",rem+rem1);
  }
  
