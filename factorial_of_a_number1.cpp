using namespace std;
#include<iostream>
int fact( int n);
int main()
{
	int n;
	cout<<"Enter n\n";
	cin>>n;
	cout<<"\nFactorial of the number is: "<<fact(n);
}
int fact(int n)
{
	if(n==0||n==1)
	return 1;
	else
	return n*fact(n-1);
}
