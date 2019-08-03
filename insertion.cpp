using namespace std;
#include<iostream>
int main()
{
	int a[15],i,ele,loc,j;
	cout<<"Enter an array\n";
	for(i=0;i<=9;i++)
	cin>>a[i];
	cout<<"Enter the element to insert and location\n";
	cin>>ele>>loc;
	j=9;
	while(j<=loc)
	{
		a[j+1]=a[j];
		j--;
	}
	a[loc]=ele;
	for(i=0;i<=10;i++)
	cout<<a[i]<<" ";
}
