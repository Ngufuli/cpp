using namespace std;
#include<iostream>
int main()
{
	int a[10],i,*p;
	p=a;
	cout<<"Enter an array\n";
	for(i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	cout<<"The array is\n";
	for(i=0;i<=9;i++)
	{
		cout<<*(p+i)<<" ";
	}
}
