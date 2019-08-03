using namespace std;
#include<iostream>
int main()
{
	int n,t,arm=0,org;
	cout<<"Enter a number:\n";
	cin>>n;
	org=n;
	while(n!=0)
	{
		t=n%10;
		arm=arm+t*t*t;
		n=n/10;
	}
	if(arm==org)
	cout<<"The number is an armstrong number:\n";
	else
	cout<<"The number is not an armstrong number:\n";
}
