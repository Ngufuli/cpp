using namespace std;
#include<iostream>
int main()
{
	int a[10],n,i,s=0;
	cout<<"Enter the 10 numbers\n";
	for(i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter a number to search\n";
	cin>>n;
	for(i=0;i<=9;i++)
	{
		if(n==a[i])
		{
			s=1;
		    break;
	
		}
	
	}
	if(s==1)
	cout<<"Search is successful at: "<<i;
	else
	cout<<"Search is not succesful";
}
