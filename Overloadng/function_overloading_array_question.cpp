/*
	writing a program to perform addition of two arrays by overloading the + operator, the number of elements 
	in both the arrays should be five(5)
*/
using namespace std;
#include<iostream>
class array
{
	int a[5];
	public:
		void get()
		{
			int i;
			cout<<"\nEnter an array\n";
			for(i=0;i<5;i++)
			cin>>a[i];
		}
		void operator +(array ob)
		{
			int i;
			for(i=0;i<5;i++)
			cout<<a[i]+ob.a[i]<<"\t";
		}
};
int main()
{
	array a1,a2;
	a1.get();
	a2.get();
	a1+a2;
}
