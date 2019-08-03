/*
	an unitialised pointer is known as a wild pointer, a wild pointer contains an address which is random
	and it's of NO use
*/


/*
	a null pointer is  a pointer which is initialised with 'NULL' and points towards nothing or 'ZERO' address
	we can not derefer a null pointer
*/

using namespace std;
#include<iostream>
int main()
{
	int *p=NULL;//NULL pointer
	cout<<p;
	cout<<"\n"<<*p;
}
