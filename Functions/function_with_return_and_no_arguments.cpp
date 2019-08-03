using namespace std;
#include<iostream>
int add();//function definition
int main()
{ 
	cout<<"The sum is:"<<add();//function call
}
int add()//function declaration
{
	int a,b,c;
	cout<<"Enter a and b\n";
	cin>>a>>b;
	c=a+b;
	return c;
}
