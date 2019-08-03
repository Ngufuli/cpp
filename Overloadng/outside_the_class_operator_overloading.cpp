/*
	->While overloading a binary operator it is mandatory to pass an argument which is an object of the same class
	
*/
using namespace std;
#include<iostream>
class complex
{
	float real, imag;
	public:
		void get()
		{
			cout<<"\nEnter a real number\n";
			cin>>real>>imag;
		}
		void operator +(complex ob);
};
void complex :: operator +(complex ob)
		{
			cout<<real+ob.real<<" +i "<<imag+ob.imag;
		}
int main()
{
	complex c1,c2;
	c1.get();
	c2.get();
	c1+c2;// c1.operator+(c2) automatically call operation
}
