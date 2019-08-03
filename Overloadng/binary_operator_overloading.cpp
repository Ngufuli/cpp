/*
	->While overloading a binary operator it is mandatory to pass an argument
	 which is an object of the same class
	
*/
using namespace std;
#include<iostream>
class complex
{
	float real, imag;
	public:
		complex(float real, float imag)
		{
			this->real=real;
			this->imag=imag;
		}
		void operator +(complex ob)// if defined outside the class it would have been-> void complex::operator()complex
		{
			cout<<real+ob.real<<" +i "<<imag+ob.imag;
		}
};
int main()
{
	complex c1(1,2),c2(3,2);
	c1+c2
	// c1.operator+(c2) automatically call operation
}
