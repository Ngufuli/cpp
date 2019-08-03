using namespace std;
#include<iostream>
int main()
{
	int n,t,sum=0;
	cout<<"Enter a number\n";
	cin>>n;
	while(n!=0)
	{
		t=n%10;
		sum=sum+t;
		n=n/10;
	}
	cout<<"Sum of digits:"<<sum;
}
