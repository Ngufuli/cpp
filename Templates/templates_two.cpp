/*
	write a program to find greatest of three integers, floats and characters type using templates
*/

using namespace std;
#include<iostream>
template <class T>
void great(T a, T b, T c)
{
	if(a>b&&a>c)
	cout<<a;
	else if(b>c)
	cout<<b;
	else 
	cout<<c;
}
int main()
{
	cout<<"The greatest int is: ";
	great(12,43,23);
	cout<<"\nThe greatest float is: ";
	great(1.2f,2.5f,3.8f);
	cout<<"\nThe greatest character is: ";
	great('d','h','y');
}

/*
using namespace std;
#include<iostream>
template <class T>
T greatest()
