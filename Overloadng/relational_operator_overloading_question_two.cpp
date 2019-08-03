//write a program to compare the two objects of student class to check whether both the objects belongs to the  same section using friend function
using namespace std;
#include<iostream>
#include<string.h>
class student
{
	char sec[20];
	public:
		void get()
		{
			cout<<"Enter the section\n";
			cin>>sec;
		}
		friend void operator == (student ob1, student ob2);
};
void operator == (student ob1, student ob2)
{
	if(strcmp(ob1.sec,ob2.sec)==0)
	cout<<"They belong to the same section\n";
	else
	cout<<"They do not belong to the same section\n";
}
int main()
{
	student s1, s2;
	s1.get();
	s2.get();
	s1==s2;//make a call to operator function
}

