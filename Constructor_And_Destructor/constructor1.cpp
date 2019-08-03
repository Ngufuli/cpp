using namespace std;
#include<iostream>
class rectangle
{
	int l,b;//data members
	public:
		rectangle()//default constructor
		{
			l=12;
			b=13;
		}
		void area()//member function
		{
			cout<<"Area is: "<<l*b;
		}
};
int main()
{
	rectangle r;//call to a constructor
	r.area();
}
