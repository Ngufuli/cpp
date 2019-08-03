/*
									CATCH ALL EXCEPTION
	The catch all exception can handle those exceptions which can not be handled by existing catch blocks/data_types
	
*/
using namespace std;
#include<iostream>
void vote(int age)
{
	if(age<=0 || age>=100)
	throw "Invalid age enterd";
	else if(age>=0 && age<18)
	throw age;
	else 
	cout<<"Go for voting\n";
}
int main()
{
	int age;
	cout<<"Enter your age\n";
	cin>>age;
	try
	{
		vote(age);
	}
	catch(const char *msg)
	{
		cout<<msg;
	}
	catch(...)
	{
		cout<<"Some problem occurs\n";
	}
}
