/*
 	write a program to perform addition of all elements of an array of int, float types using function templates,
 	assume that there ae five elements in both the arrays
*/
using namespace std;
#include<iostream>
template <class T>
void sum(T *arr)
{
	int i;
	T sum=0;
	for(i=0;i<5;i++)
	{
		sum=sum+*(arr+i);
	}
	cout<<"Sum is: "<<sum;
	cout<<"\n";
}
int main()
{
	int a[]={1,3,4,6,7};
	float b[]={1.2f,2.3f,3.2f,2.5f,6.7f};
	sum(a);
	sum(b);
}
