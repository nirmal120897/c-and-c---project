#include<stdio.h>
void main()
{
	int row,col,n;
	for(row=1;row<6;row++)
	{
		for(col=1;row>=col;col++)
		{
			printf("%d",row*row);
			
		}
		printf("\n");
	}
}
