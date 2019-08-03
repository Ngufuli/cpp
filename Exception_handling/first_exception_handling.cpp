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
		throw n2;//this variable matches with the data_type used in catch(we sometimes call it a constant) :)
		cout<<"Division of the two numbers:\n"<<(float)n1/n2;
	}
	catch(int v) //and if it is a string we write catch(const char *msg)
	{
		cout<<"Divide by zero exception\n";//cout<<msg;
	}
}
