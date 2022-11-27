#include<stdio.h>
void main()
{
	int size = 5,i,j,k;

  for (i = 1; i <= size; i++) 
  {
    for ( j = size; j > i; j--) 
	{
      printf(" ");
    }
    for (k = 0; k < i*2-1; k++) 
	{
      printf("*");
    }
    printf("\n");
  }
  for (i = 1; i <= size-1; i++) 
  {
    for ( j = 0; j < i; j++) 
	{
      printf(" ");
    }
    for ( k = (size-i)*2-1; k > 0; k--) 
	{
      printf("*");
    }
    printf("\n");
}
}
