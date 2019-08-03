//storing address of address
//int *p=&x; most appropriate
//int p=&x;
using namespace std;
#include<iostream>
int main()
{
	char x[20];
	char *p;
	p=&x;
	cout<<p;
	cout<<"\n"<<*p;
	
}
