#include<stdio.h>
void main()
{
	int col,row;
	for(row=1;row<6;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d",row);
		}
		printf("\n");
	}
}
