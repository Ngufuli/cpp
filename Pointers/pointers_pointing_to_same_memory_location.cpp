/*	

	two pointer variables can be compared if they belong to element of the same array

*/
using namespace std;
#include<iostream>
int main()
{
	int a[]={12,43,5,67,8};

	int *p1,*p2;
	p1=&a[1];
	p2=&a[1];
	if(p1==p2)
	cout<<"Two pointers point to the same memory location\n";
	else
	cout<<"Two pointers do not point to the same memory location\n";
}
