/*	
	constructor overloading
	This is the process of having two or more constructors within a class, having the same name but differet
	signatures
	
	signatures can be different in the sense that, either the number of arguments should be different OR type
	of arguments should be different and both of them
*/

using namespace std;
#include<iostream>
class rectangle
{
	int l,b;
	public:
		rectangle()
		{
			l=12;
			b=15;
		}
		rectangle(int x)
		{
			l=x;
			b=15;
		}
		rectangle(int x, int y)
		{
			l=x;
			b=y;
		}
		void show()
		{
			cout<<"\nArea is: "<<l*b;
		}
};
int main()
{
	rectangle ob1;
	ob1.show();
	rectangle ob2(56);
	ob2.show();
	rectangle ob3(56,89);
	ob3.show();	
}
