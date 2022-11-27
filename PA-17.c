/*17. Write Program use switch statement. Display Monday to Sunday */
#include<stdio.h>
void main()
{
	int day;
	printf("Enter the day number ::");
	scanf("%d",&day);
	switch(day)
	{
		case 1:
			printf("Monday");
			break;
			case 2:
				printf("tuesday");
				break;
				case 3:
					printf("Wednesday");
					break;
					case 4:
						printf("Thusday");
						break;
						case 5:
							printf("friday");
							break;
							case 6:
								printf("saturday");
								break;
								default:
									printf("Enter the valid value");
									
			
				
	}
}
