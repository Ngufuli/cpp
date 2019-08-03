/*
	OVERLOADING RELATIONAL OPERATORS
*/
using namespace std;
#include<iostream>
class complex
{
	float real, imag;
	public:
		void get()
		{
			cout<<"Enter the real and imaginary numbers\n";
			cin>>real>>imag;
		}
		int operator ==(complex ob)
		{
			if(real==ob.real && imag==ob.imag)
			return 1;
			else
			return 0;
		}
};
int main()
{
	complex c1,c2;
	c1.get();
	c2.get();
	if(c1==c2)//making a call to operator function
	cout<<"The two complex numbers are equal\n";
	else
	cout<<"The two complex numbers are not equal\n";
}
