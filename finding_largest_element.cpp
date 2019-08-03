//WAP a program to find the largest element in an array of ten intergers using pointers
using namespace std;
#include<iostream>
int main()
{
	int a[10],i,max,*p;
	cout<<"Enter the ten elements\n";
	for(i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	p=&a[0];
	max=*p;
	for(i=1;i<=9;i++)
	{
		if(*(p+i)>max)
		max=*(p+i);
	}
	cout<<"The largest element is "<<max;
}
