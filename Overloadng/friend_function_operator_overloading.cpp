/*
	OVERLOADING A BINARY OPERATOR USING A FRIEND FUNCTION
	->just like a member function of a class can be a friend function to a class we can also make an operator function
	as a friend function
	
	->if an operator function is a friend function to a class, it must take two arguments which are objects of 
	same class
*/

using namespace std;
#include<iostream>
class complex
{
	float real, imag;
	public:
		 void get()
		 {
		 	cout<<"\nEnter the real number\n";
		 	cin>>real>>imag;
		 }
	
	friend void operator +(complex ob1, complex ob2);
};
void operator +(complex ob1, complex ob2)
{
	cout<<ob1.real+ob2.real<<" +i "<<ob1.imag+ob2.imag;
}

int main()
{
	complex c1, c2;
	c1.get();
	c2.get();
	c1+c2;//operator +(c1,c2) automatically calls operator
}
