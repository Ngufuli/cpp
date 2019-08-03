/*
	write a program to swap two integers, floats and char using function templates using the third variable
	
*/
using namespace std;
#include<iostream>
template <class T>
void swap(T a, T b)
{
	T c;
	c=a;a=b;b=c;
	cout<<"Swap values are: "<<a<<" "<<b;
}
int main()
{
	swap(2,4);
	cout<<"\n";
	swap(2.3f,3.6f);
	cout<<"\n";
	swap('d','j');
}
