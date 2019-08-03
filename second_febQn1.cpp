using namespace std;
#include<iostream>
int main()
{
	int a[10],i,sum=0;
	cout<<"Enter 10 numbers\n";
	for(i=0;i<=9;i++)
	{
		cin>>a[i];
		
	}
	for(i=0;i<=9;i++)
	{
		sum=sum+a[i];
	}
	cout<<"\nSum of 10 elements is: "<<sum;
	return 0;
}
