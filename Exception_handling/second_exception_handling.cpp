using namespace std;
#include<iostream>
int main()
{
	int n1, n2;
	cout<<"Enter two numbers\n";
	cin>>n1>>n2;
	try
	{
		if(n2==0)
		throw "Division by two is not possible\n";
		
		cout<<"Division of two numbers\n"<<(float)n1/n2;
	}
	catch(const char *msg)
	{
		cout<<msg;
	}
}
