using namespace std;
#include<iostream>
int main()
{
	int a[10],i,p=0,n=0,z=0;
	cout<<"Enter an array\n";
	for(i=0;i<=9;i++)
	cin>>a[i];
	for(i=0;i<=9;i++)
	{
		if(a[i]>0)
		p++;
		else if(a[i]<0)
		n++;
		else
		z++;
	}
	cout<<p<<" "<<n<<" "<<z<<" ";
}
