/*
	HIERARCHICAL INHERITENCE(opposite to multiple inheritence)
	We have multiple derived classes taking the features of single base class
*/
using namespace std;
#include<iostream>
class person
{
	protected:
		string name, state;
		int age;
};
class student : public person
{
	int s_id;
	string section;
	public:
		void get()
		{
			cout<<"Enter the details student\n";
			cin>>s_id>>name>>state>>age>>section;
		}
		void show()
		{
			cout<<s_id<<"\t"<<name<<"\t"<<state<<"\t"<<age;
		}
};
class teacher : public person
{
	int tID;
	string dept;
	public:
		void get()
		{
			cout<<"\nEnter the details of the teacher\n";
			cin>>tID>>name>>state>>age>>dept;
		}
		void show()
		{
			cout<<tID<<"\t"<<name<<"\t"<<state<<"\t"<<age<<"\t"<<dept;
			
		}
};
int main()
{
	student s;
	s.get();
	s.show();
	teacher t;
	t.get();
	t.show();
}
