/*
	FILE HANDLING 
	FILE-> This is a sequence of characters / bytes which can be used to store the data  permanently  on some 
	permanent storage device
	
	In C++ we will be using two kinds of FILES
	1)TEXT(.txt)
	2)BINARY(.dat)
	
	In C++ there are three kinds of streams/classes required to handle the files
	1) ifstream--->read/input
	2) ofstream--->write/output
	3) fstream---->read/write
*/


/*	Opening a file
	There are two methods of opening a file
	1)Constructor
	2)function

	syntax(of constructor method)
		
	syntax(of function method)
	   
	    ifstream ob;
	    ob.open("file_name")
*/


//constructor method
using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	ofstream ob("K17KW.txt")//if it doestnt exist it will be automatically created
	string name;
	int roll;
	float marks;
	cout<<"Enter name roll and marks\n";
	cin>>name>>roll>>marks;
	ob<<name<<"\t"<<roll<<"\t"<<marks;
}
