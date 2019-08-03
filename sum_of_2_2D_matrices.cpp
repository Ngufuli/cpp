using namespace std;
#include<iostream>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,sum=0;
	cout<<"Enter the first matrix\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the second matrix\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Sum of the two matrices is\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
	
}
