//		USES OF THIS POINTER IN C++
/*
		it is a constant pointer which contains the memory address of the current object, and is used when data
		members name and arguments' names are similar to each other
	
		this pointer can not be used with static member functions, because this pointer is associated with an object
		but static member functions do not;
*/

using namespace std;
#include<iostream>
class rectangle
{
	int l,b;
	public:
		rectangle(int l,int b)
		{
			this->l=l;
			this->b=b;
		}
		void area()
		{
			cout<<"The area is: "<<l*b;
		}
};
int main()
{
	rectangle r(10,10);
	r.area();
}
