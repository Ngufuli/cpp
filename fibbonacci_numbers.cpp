using namespace std;
#include<iostream>
int fibb(int n);
int main()
{
	int n,i;
	cout<<"Enter a number\n";
	cin>>n;
	for(i=1;i<=n;i++)
	cout<<fibb(i)<<" ";
}
int fibb(int n)
{
	if(n==1)
	return 0;
	else if(n==2)
	return 1;
	else
	return fibb(n-1)+fibb(n-2);
}
