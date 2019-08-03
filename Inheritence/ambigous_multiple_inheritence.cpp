using namespace std;
#include<iostream>
class A
{
	public:
		void show()
		{
			cout<<"I am the base class of A\n";
		}
};
class B
{
	public:
		void show()
		{
			cout<<"I am the base class of B\n";
		}
};
class C : public A, public B
{
	
};
int main()
{
	C ob;
	//ob.show(); // ambigous call to show()
	ob.A::show();//solution to ambigous call
	ob.B::show();
}
