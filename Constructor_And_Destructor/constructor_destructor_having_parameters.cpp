using namespace std;
#include<iostream>
class A
{
	public:
		A(int a)
		{
			cout<<"A class constructor called\n";
		}
};
class B : public A
{
	public:
		B(int a,int b,int c):A(a)
		{
			cout<<a<<"\t"<<b<<"\t"<<c;
			cout<<"\nB class constructor called\n";
		}
};
int main()
{
	B ob(15,30,45);
}
