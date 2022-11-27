/* c++
Write a program of Fibonacci and factorial using Class*/
#include<iostream>
using namespace std;

class function{
	private:
		int a=0,b=1,c;
			int i,fact=1;
		public:
			void fibonacci()
			{
				printf("\nThe fibonacci series is :");
				printf("\n%d\t",a);
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
			
			void factorial()
			{
			
				for(i=1;i<6;i++)
				{
					fact=fact*i;
				}
				printf("\nThe factorial of the given number is: %d",fact);
				
			}
};

int main()
{
	function cc;
	cc.factorial();
	cc.fibonacci();
	
	
}

