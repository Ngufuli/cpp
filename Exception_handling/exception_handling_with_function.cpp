/*
						USING EXCEPTION HANDLING IN FUNCTIONS
*/
using namespace std;
#include<iostream>
void divide(int a, int b)
{
	if(b==0)
	throw "Divide by zero exception\n";
	cout<<"Division of two numbers: \n"<<(float)a/b;
}
int main()
{
	int a, b;
	cout<<"Enter the two numbers\n";
	cin>>a>>b;
	try
	{
		divide(a,b);//function call
	}
	catch(const char *msg)
	{
		cout<<msg;
	}
}

