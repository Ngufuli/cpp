/*	
	void pointer is also known as generic pointer which is capable of storing address of variable of all data_type
	but one data_type at a time, there is a need of a type_casting while dereferencing*(int *)p a void pointer
*/
using namespace std;
#include<iostream>
int main()
{
	void *p;
	int x=20;
	float y=29.14;
	char z='q';
	p=&x;
	cout<<*(int *)p;
	p=&y;
	cout<<"\n"<<*(int *)p;
	p=&z;
	cout<<"\n"<<*(int *)p;
}
