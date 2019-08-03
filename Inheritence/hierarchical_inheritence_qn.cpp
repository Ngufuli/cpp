using namespace std;
#include<iostream>
class student
{
	protected:
		int roll_no;
		string name, section;
};
class fee : public student
{
	int fee;
	public:
		void get_fee()
		{
			cout<<"\nEnter Name\n";
			cin>>name;
			cout<<"\nEnter Roll number\n";
			cin>>roll_no;
			cout<<"\nEnter section\n";
			cin>>section;
			cout<<"\nEnter fees\n";
			cin>>fee;
			cout<<"\n\n\nThe details of the student are\n";
			cout<<name<<"\t"<<roll_no<<"\t"<<section<<"\t"<<fee;
		}
		
};
class marks : public student
{
	int m1,m2;
	public:
		void show()
		{
			cout<<"\n\nEnter Name\n";
			cin>>name;
			cout<<"\nEnter Roll number\n";
			cin>>roll_no;
			cout<<"\nEnter section\n";
			cin>>section;
			cout<<"\nEnter marks 1 and marks 2";
			cin>>m1>>m2;
			cout<<"\nName: "<<name<<"Roll number: "<<roll_no<<"Section: "<<section<<"Marks 1"<<m1<<"\nMarks 2"<<m2;
		}
	
};
int main()
{
	fee f;
	marks m;
	f.get_fee();
	m.show();
}
