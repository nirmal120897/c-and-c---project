#include<stdio.h>
void main()
{    int col,row,k,n=5;
	
	for (row=0; row<n;row++)
	 {

    for (col=0; col<n-row-1;col++) 
	{
      printf(" ");
    }
    for ( k=0; k<2*row+1; k++)
	 {
      printf("%d",k+1);
    }
    printf("\n");
     }
}
