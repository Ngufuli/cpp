/*
	When one derived class takes features of multiple base classes 
*/

using namespace std;
#include<iostream>
class internal
{
	protected:
		int internal_marks;
};
class external
{
	protected:
		int external_marks;
};
class result : public internal, public external
{
	int roll_no;
	string name, section;
	public:
		void get()
		{
			cout<<"Enter roll_no, name, section, external and internal marks\n";
			cin>>roll_no>>name>>section>>external_marks>>internal_marks;
		}
		void show()
		{
			cout<<roll_no<<"\t"<<name<<"\t"<<section<<"\n";
			cout<<"\t"<<internal_marks+external_marks;
		}
};
int main()
{
	result r;
	r.get();
	r.show();
}
