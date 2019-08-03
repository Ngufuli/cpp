using namespace std;
#include<iostream>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
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
	cout<<"The multiple of the two matrices is\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=0;
			for(k=0;k<=2;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
			cout<<c[i][j]<<"\t";
		}
		
		cout<<"\n";
	}
	
}
