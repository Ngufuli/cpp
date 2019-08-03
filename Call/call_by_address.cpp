//call by address
using namespace std;
#include<iostream>
void inc(int *n);
int main()
{
	int n;
	cout<<"\nEnter n\n";
	cin>>n;
	cout<<"\nbefore increase: \n"<<n;
	inc(&n);//call by address or actual arguments
	cout<<"\nn after increse: \n"<<n;
}
void inc(int *n)
{
	*n=*n+1;
}
