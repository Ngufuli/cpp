//CLASS TO BASIC TYPE CONVERSION
/*
	In this type of conversion we need to convert a class type object to basic type.
	This can be achieved be overloading the basic operator in which a class type to be converted
*/
using namespace std;
#include<iostream>
class Time
{
	int hrs,min;
	public:
		Time(int , int );//constructor
		operator int ();//casting operator function
		
};
Time :: Time(int a, int b)
{
	hrs=a;
	min=b;
}
Time :: operator int ()
{
	cout<<"Class type to Basic type Type conversion..."<<endl;
	return(hrs*60+min);
}
int main()
int h,m,duration;
cout<<"Enter hours \n";
cin>>h;
cout<<"Enter minutes\n";
cin>>m;
Time t(h,m);//parameterized constructor called
duration = t;//operator function called
cout<<"Total minutes are"<<duration;
