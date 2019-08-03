using namespace std;
#include<iostream>
template <class T>
T add(T a, T b)
{
	return a+b;
}
int main()
{
	cout<<"Addition of two int: "<<add(1,2);
	cout<<"\nAddition of two floats: "<<add(1.2f,3.4f);
	cout<<"\nAddition of doubles: "<<add(1.23,2.45);
}
