/*18. Write a Program of Addition, Subtraction ,Multiplication and Division using 
Switch case.(Must Be Menu Driven) */
#include<stdio.h>
 void main()
 {
 	int a=10,b=20,operation;
 	printf("Enter the operation number:: ");
 	scanf("%d",&operation);
 	switch(operation)
 	{
 		case 1:
 			printf("\nsubstraction ::%d",a-b);
 			break;
 			case 2:
 				printf("\nmultiplication::%d",a*b);
 				break;
 				case 3:
 					printf("\naddition::%d",a+b);
 					case 4:
 						printf("\ndivision::%f",(float)a/b);
 						break;
 						default:
 							printf("\nEnter valid number of operation");
 							
	 }
 	
 }
