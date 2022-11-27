#include<stdio.h>
void main()
{
	int col,row,n=6,k;
	for(row=0;row<6;row++)
	{
		for(col=0;col<n-row;col++)
		{
			printf(" ");
		}
	
		
		for(k=0;row>=k;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	
}
