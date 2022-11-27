/*Define a class to represent lecture details. Include the following members and the 
program should handle at lest details of 5 lecturer.

	Data members 
Name of the lecturer 
Name of the subject 
 Name of course 
Number of lecturers 
Data functions 
 To assign initial values 
 To add a lecture details 
 To display name and lecture details */
 
 #include<iostream>
 using  namespace std;
 
 class lecture{
 	protected:
 		
 		char name_lecturer[20]= "hitesh_patel";
		char subject[10]="chemistry";
		char course[10]="basic";
		
		public:
		void initial_values()
		{
			printf("\nthe course faculty name is :%s",name_lecturer);
			printf("\nThe subject name is :%s",subject);
		 } 
		 
		 
		 void detail()
		 {
		 	printf("\nthe topic of the lecture is organic chemistry and faculty is :%s",name_lecturer);
		 	
		 }
 };
 
 int main()
 {
 	lecture bb;
 	bb.detail();
 	bb.initial_values();
 	
 }
