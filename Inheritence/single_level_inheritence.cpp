using namespace std;
#include<iostream>
class student
{
	int roll_no;
	protected:// it's members are inherited to the immediate class, and not to the main
		string name, section;
	void get()
	{
		cout<<"Enter the roll_no\n";
		cin>>roll_no;
	}
	void show()
	{
		cout<<roll_no;
	}
};
class result : public student
{
	float marks;
	public:
		void get_info()
		{
			get();
			cout<<"Enter name section and marks\n";
			cin>>name>>section>>marks;
		}
		void show_info()
		{
			show();
			cout<<"\t"<<name<<"\t"<<section<<"\t"<<marks;
		}
};
int main()
{
	result r;
	r.get_info();
	r.show_info();
}
