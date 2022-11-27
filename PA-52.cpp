/* Write a program to calculate the area of circle, rectangle and triangle using 
Function Overloading 
 Circle: Pi * Area * Area; 
 Rectangle: Area * breadth 
 Triangle: ½ *Area* breadth*/
 
 #include<iostream>
using namespace std;
  void operation(int x,double y)
  {
  	cout<<"The summation of two number :"<<x+y<<endl;
  	
   } 
   
   void operation(int x,int y)
  {
  	cout<<"The multiplication  of two number :"<<x*y<<endl;
  	
   } 
   void operation(double x,int y)
  {
  	cout<<"The substraction of two number :"<<x-y<<endl;
  	
   } 
   
   void operation(double x,double y)
  {
  	cout<<"The division of two number :"<<x/y<<endl;
  	
   } 
   
   int main()
   {
   	operation(2,2.5);
   	operation(2,5);
   	operation(2.3232,3);
   	operation(2.6,2.8);
   	
   }
