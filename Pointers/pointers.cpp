/* PRINTING THE ELEMENTS WITH THE HELP OF POINTERS
	Pointers and Arrays

*/
using namespace std;
#include<iostream>
int main()
{
	int a[]={12,34,56,78,90};
	int *p,i;
	//p=&a[0];
	p=a;
	for(i=0;i<=4;i++)
	{
		cout<<*p<<" ";
		p=p+1;
	}

}
