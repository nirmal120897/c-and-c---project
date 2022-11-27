/*19. Write a program of to find out the Area of Triangle, Rectangle and Circle 
using If Condition.(Must Be Menu Driven) */
#include<stdio.h>
void main()
{
	int shape,h,b,l,r;
	float pie=3.14;
	printf("Enter the shape to find of the area of that shape:: ");
	scanf("%d",&shape);
	if(shape==1)
	{
		printf("\nEnter the value of radius:: ");
		scanf("%d",&r);
		printf("\nThe area of the circle is:: %f",(float)2*pie*r*r);
		
	}
	
	if(shape==2)
	{
		printf("\nEnter the value of l and b::");
		scanf("%d %d",&l,&b);
		printf("\nArea of the triangle::%f",(float)0.5*l*b);
	}
	
	if(shape==3)
	{
		printf("\nEnter the value of l and b::");
		scanf("%d %d",&l,&b);
		printf("\nArea of the rectangle::%d",l*b);
	}
}
