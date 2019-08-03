/*
	MULTILEVEL INHERITENCE
	A
	^
	B -> Inherits features of A
	^
	C -> Inherits features of B	
*/

using namespace std;
#include<iostream>
class student
{
	int roll_no;
	string name, section;
	protected:
		void get()
		{
			cout<<"Enter the Roll number, name and section\n";
			cin>>roll_no>>name>>section;
		}
		void show()
		{
			cout<<roll_no<<"\t"<<name<<"\t"<<section<<"\n";
		}
};
class marks : public student
{
	protected:
		int m1,m2;
};
class result : public marks
{
	public:
		void show_result()
		{
			get();
			cout<<"\nEnter m1 and m2\n";
			cin>>m1>>m2;
			show();
			cout<<"\t"<<m1<<"\t"<<m2;
		}
};
int main()
{
	result r;
	r.show_result();
}
