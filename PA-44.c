/*. Write a Program of Factorial using Recursive Function */
#include<stdio.h>

#include<stdio.h>
int fact(int a);
 void main()
 {int a=6;
  
  printf("Factorial of the given no:%d",fact(6));
 	
 }
  int fact(int a)
  {
  	if(a!=1){
  		return (a*fact(a-1));
	  }
  }
