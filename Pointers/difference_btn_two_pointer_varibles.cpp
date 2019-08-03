/*	DIFFERENCE OF TWO POINTER VARIABLES
	the two pointer variables can be substracted if they points towards elements of the same array
	it gives the the difference between the two memory location
*/  

using namespace std;
#include<iostream>
int main()
{
	int a[]={12,34,5,67,8};
	int *p1,*p2;
	p1=&a[1];
	p2=&a[4];
	cout<<*p2-*p1;
}
