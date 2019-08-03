// giving the name of arguments is not mandatory
#include<iostream>
using namespace std;
class abc
{
	int a,b;
	public:
		void get()
		{
			cout<<"Enter a and b";
			cin>>a>>b;
		}
		
		friend void sum(abc ob);
};
void sum(abc ob) //not a member of a class
{
	cout<<"The sum is"<<ob.a+ob.b;
}

int main()
{
	abc x;
	x.get();
	sum(x);
}
