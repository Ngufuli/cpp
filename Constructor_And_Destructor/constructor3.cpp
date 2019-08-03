using namespace std;
#include<iostream>
class rectangle
{
	int l,b;//data members
	public:
		rectangle(int x,int y)//parametarized constructor
		{
			l=x;
			b=y;
		}
		rectangle(rectangle &ob)//copy constructor
		{
			l=ob.l;
			b=ob.b;
		}
		void area()
		{
			cout<<"\nThe area is: "<<l*b;
		}
};
int main()
{
	int x,y;
	cout<<"\nEnter length and breadth\n";
	cin>>x>>y;
	rectangle r(x,y);//call to parametarized constructor
	//rectangle r1=r; //call to copy constructor
	rectangle r1(r); //call to copy constructor
	r.area();
	r1.area();
}
