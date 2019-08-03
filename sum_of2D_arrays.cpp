//sum=0 so it may not give the garbage value
#include<iostream>
using namespace std;
int main()
{
	int a[4][5],i,j,sum=0;
	cout<<"Enter an array\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>a[i][j];
			
		}
	}
	cout<<"The 2D array is\n";
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cout<<a[i][j]<<"\t";
		sum=sum+a[i][j];
		}
		cout<<"\n";
}
		
	
		cout<<"\nSum is "<<sum;
	
}
