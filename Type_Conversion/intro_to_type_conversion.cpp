/*	TYPE CONVERSION IN CLASSES
    ->Is a process in which we need to convert the variable of one data type to another data type
    
    There are two type of type conversion
	1)basic to class conversion
	-->In this type of conversion we need to convert the basic data type like integer, char, float to class type
	 objects
	-->This can be implemented by using a normal parameterized constructor.
	
	2)class to basic conversion
*/

//Example
using namespace std;
#include<iostream>
class Time
{
	int hrs,min;
	public:
		Time(int);//parameterized constructor
		void display();//member function
};
Time :: Time(int t)
{
	hrs=t/60;
	min=t%60;
}

void Time :: display()
{
	cout<<hrs<< ": Hours(s)"<<endl;
	cout<<hrs<< ": Minutes(s)"<<endl;
}
int main()
{
	int duration;
	cout<<"Enter the time duration in minutes\n";
	cin>>duration;
	Time t1=duration;//Time t1=Time(duaration)
	t1.display();
}
