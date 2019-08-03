//call by reference

using namespace std;
#include<iostream>
void inc(int &n);
{
	int n;
	cout<<"Enter n\n";
	cin>>n;
	cout<<"\nn before increase is: "<<n;
	inc(&n);
	cout<<"n after increase is: "<<n;
}
void inc(int &n)
{
	n=n+1;
}
