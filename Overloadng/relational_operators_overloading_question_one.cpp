//writing a program to compare two objects, by overloading (==) operators using friend function
// you need to take a parameterized constructor to initialize the data members of a class


using namespace std;
#include<iostream>
class number
{
	int n;
	public:
		number(int n)
		{
			this->n=n;
		}
		
		
		friend int operator ==(number ob1, number ob2);
		
};
int operator ==(number ob1, number ob2)
{
	if(ob1.n==ob2.n)
	return 1;
	else
	return 0;
}
int main()
{
	number n1(12),n2(12);
	if(n1==n2)
	cout<<"The two objects are equal\n";
	else
	cout<<"The two objects are not equal\n";
}
