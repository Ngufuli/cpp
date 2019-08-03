/*
							        CLASS TEMPLATES IN C++-----> feature for generic programming
	->Like function templates, class templates are useful when a class defines something that is independent of
	data_type.
	
	Generic class is the class that is capable of holding different data type
*/
//example

using namespace std;
#include<iostream>
template <class T>
class sum{
	T a,b;
	public:
		sum(T x, T y)//parameterized constructor(Does initialization of data members)
		{
			a=x;
			b=y;
		}
		void calc(){
			cout<<"\nSum is: "<<a+b;
		}
};
int main()
{
	sum <int> ob(1,2);
	sum <float> ob1(1.2f,5.6f);
	ob.calc();
	ob1.calc();
}
