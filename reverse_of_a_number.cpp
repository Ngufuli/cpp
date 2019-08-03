using namespace std;
#include<iostream>
int main()
{
	int t,n,rev=0;
	cout<<"Enter a number\n";
	cin>>n;
	while(n!=0)
	{
		t=n%10;
		rev=rev*10+t;
		n=n/10;
	}
	
	cout<<"The reverse of a number is:"<<rev;
}
