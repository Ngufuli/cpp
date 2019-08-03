using namespace std;
#include<iostream>
int main()
{
	int a[10],i,sum;
	cout<<"Enter 10 numbers\n";
	for(i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<=9;i++)
	{
		if(a[i]%2==0)
		{
			sum=sum+a[i];
		}
	}
	cout<<"The sum of even numbers is: "<<sum;
	return 0;
}
