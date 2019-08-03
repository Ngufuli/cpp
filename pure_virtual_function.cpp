using namespace std;
#include<iostream>
class shape//abstract class
{
	protected:
		int l,b;
		float r;
	
	public:
		virtual void area()=0;//pure virtual function
		
};
class rectangle : public shape
{
	public:
		void area()
		{
			cout<<"\nEnter L and B\n";
			cin>>l>>b;
			cout<<"\nArea of the rectangle is: "<<l*b;
		}
};
class circle : public shape
{
	public:
		void area()
		{
			cout<<"\nEnter  R\n";
			cin>>r;
			cout<<"\nThe area of the circle is: "<<3.14*r*r;	
		}
};
int main()
{
	shape *ptr;
	rectangle r;
	ptr=&r;
	ptr->area();
	circle c;
	ptr=&c;
	ptr->area();
}
