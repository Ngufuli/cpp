//function calling techniques
//->call by address
//->call by value:changes made in the formal arguments, will not be reflected to the main functions
//->call by reference:




using namespace std;
#include<iostream>
void inc(int n);
int main()
{
	int n;
	cout<<"Enter n\n";
	cin>>n;
	cout<<"\nn before increase: "<<n;
	inc(n);//call by value/ ;actual arguments
	cout<<"\nn after increase is"<<n;
}
void inc(int n)//formal arguments
{
	n=n+1;
}
