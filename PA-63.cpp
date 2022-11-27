/*Write a program to read and write data in to file.*/

#include<iostream>
#include<fstream>
using namespace std;
 int main(){
 	
 	string data_type;
 	string data_type2;
 	cout<<"Enter the data which u want :";
 	getline(cin ,data_type);
    fstream data1;
    data1.open("nirmal.txt");
    data1<<endl<<data_type;
    cout<<endl<<data_type;
   // data1.close();
    cout<<endl;
    fstream data2;
    getline(cin,data_type2);
    data2.open("nirmal.txt");
    data2<<endl<<data_type2;
    cout<<endl<<data_type2;
    data2.close();
 }
