/*. write a program to print the Fibonacci series using function */
 
#include<stdio.h>
void fibbo(int a,int b,int c)
{
  	 printf("%d\t",a);
  	 printf("%d\t",b);
  	 c=a+b;
  	 printf("%d\t",c);
	 while(c<25)
	 {
	  a=b;
  	  b=c;
  	  c=a+b;
  	  printf("%d\t",c);
     }
}

void main()
{
	fibbo(0,1,0);
}
