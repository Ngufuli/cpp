using namespace std;
#include<iostream>
int main()
{
	int a[15],i,j,loc;
	cout<<"Enter an array\n";
	for(i=0;i<=9;i++)
	cin>>a[i];
	cout<<"Enter the location to delete\n";
	cin>>loc;
	j=loc;
	while(j<9)
	{
		a[j]=a[j+1];
		j++;
	}
	for(i=0;i<=8;i++)
	cout<<a[i]<<" ";
}
