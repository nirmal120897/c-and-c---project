/* c++
Write a program of Fibonacci and factorial using Class*/
#include<iostream>
using namespace std;

class function{
	private:
		int a=0,b=1,c;
		public:
			void fibonacci()
			{
				printf("%d",a);
				printf("%d\n",b);
				c=a+b;
				printf("%d",c);				
			}
			
			void factorial()
			{
				int i,fact=1;
				for(i=0;i<6;i++)
				{
					fact=fact*i;
				}
				printf("The factorial of the given number is: %d",fact);
				
			}
};

int main()
{
	function cc;
	cc.factorial();
	cc.fibonacci();
	
	
}

