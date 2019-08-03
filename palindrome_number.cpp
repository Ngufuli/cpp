using namespace std;
#include<iostream>
int main()
{
	int t,n,pal=0,org;
	cout<<"Enter a number\n";
	cin>>n;
	org=n;
	while(n!=0)
	{
		t=n%10;
		pal=pal*10+t;
		n=n/10;
	}
	
	if(pal==org)
	cout<<"This is a palindrome number:\n";
	else
	cout<<"This is not a palindrome number:\n";
}
