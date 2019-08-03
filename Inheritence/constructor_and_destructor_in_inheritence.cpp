using namespace std;
#include<iostream>
class A
{
	public:
		A()
		{
			cout<<"A class constructor called\n";
		}
		~A()
		{
			cout<<"A class destructor called\n";
		}
};
class B : public A
{
	public:
		B()
		{
			cout<<"B class constructor called\n";
		}
		~B()
		{
			cout<<"B class destructor called\n";
		}
};
int main()
{
	B ob;
}
