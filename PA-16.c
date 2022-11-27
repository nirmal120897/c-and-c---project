/*16. Write a program user enter the 5 subjects mark. You have to make a total 
and find the percentage. 
percentage > 75 you have to print “Distinction” 
percentage > 60 and percentage <= 75 you have to print “First class” 
percentage >50 and percentage <= 60 you have to print “Second class” 
percentage > 35 and percentage <= 50 you have to print “Pass class” 
Otherwise print “Fail”*/
#include<stdio.h>
 void main()
 {
 	int sub_1,sub_2,sub_3,sub_4,sub_5,percentage;
 	printf("Enter the marks in subjects :");
 	scanf("%d %d %d %d %d",&sub_1,&sub_2,&sub_3,&sub_4,&sub_5);
 	printf("The total of 5 sub is %d",(sub_1+sub_2+sub_3+sub_4+sub_5));
 	printf("\n The percentage of 5 sub is %f",(float)(percentage=(sub_1+sub_2+sub_3+sub_4+sub_5)/5));
 	printf("\nThe result is ::");
 	if(percentage>75)
 	{
 		printf("Distinction");
	 
	 }
	 else if(percentage>60 && percentage<=75)
	 {
	 	printf("First class");
	 }
	 else if(percentage>50 && percentage<=60)
	 {
	 	printf("Second class");
	 }
	 else if(percentage>35 && percentage<=50)
	 {
	 	printf("Pass class");
	 }
}
