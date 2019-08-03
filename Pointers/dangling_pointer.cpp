/*
	
	dangling pointer: is a pointer which points towards a variable which either does not exist or has been deleted
	therefore if a pointer points towards a deleted variable, the pointer is said to be a dangling pointer

*/

using namespace std;
#include<iostream>
int main()
{
	int *p;
	{
		int x=20;
		p=&x;
		cout<<*p;
	}
	cout<<"\n"<<*p;// P is dangling and pointing to the x which is not existing
}
