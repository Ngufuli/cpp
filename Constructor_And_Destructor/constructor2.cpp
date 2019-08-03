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
		void area()//member function
		{
			cout<<"\nArea is: \n"<<l*b;
		}
};
int main()
{
	int x,y;
	cout<<"\nEnter length and breadth\n";
	cin>>x>>y;
	rectangle r(x,y);//call to constructor
	r.area();
}
