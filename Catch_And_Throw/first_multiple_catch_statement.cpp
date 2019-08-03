using namespace std;
#include<iostream>
int main()
{
	int n;
	cout<<"Enter a positive number\n";
	cin>>n;
	try
	{
		if(n==0)
		throw "Number is zero";
		else if(n<0)
		throw n;
		cout<<"A positive number entered\n";
	}
	catch(const char *msg)
	{
		cout<<msg;
	}
	catch(int exp)
	{
		cout<<"A negative number entered\n";
	}
}
