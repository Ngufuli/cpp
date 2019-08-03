/*
	OPERATOR OVERLOADING
	->Is the process of assigning an additional meaning to the existing operators so that it can work with objects
	of a class
	
	->for example: we can overload the plus operator in order to add the two objects in additional to it's 
	original meaning
	
	->operator overloading can only be achieved by using an operator function.
	
	->the syntax of operator overloading is given by:
	return_type operator<operator symbol> (arguments)
	
	-> there are few operators which can not be overloaded in C++
	:: scope resolution operator can not be overloaded
	?: conditional operator can not be overloaded
	sizeof() size of operator can not be overloaded
	. member access operator
	* pointer member operator
	
	
	OVERLOADING UNARY OPERATORS
	1) ++ OPERATOR
	
	
	
*/

using namespace std;
#include<iostream>
class overload
{
	int a, b, c;
	
	public:
		overload(int a, int b, int c)
		{
			this->a=a;
			this->b=b;
			this->c=c;
		}
		
		void operator ++()//no taking arguments
		{
			a=a+5;
			b=b+10;
			c=c+25;
		}
		
		void show()
		{
			cout<<a<<"\t"<<b<<"\t"<<c;
		}
};
int main()
{
	overload ob(10,10,10);
	cout<<"\nBefore Increase\n";
	ob.show();
	++ob;//automatically calls the operator function
	cout<<"\nAfter Increase\n";
	ob.show();
}
