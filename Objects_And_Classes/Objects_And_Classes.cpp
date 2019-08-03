using namespace std;
#include<iostream>
class student
{
	private:
		int roll_no;
		char name[20];
		float marks;
		
	public:
		void get()
		{
			cout<<"\nEnter name roll number and marks\n";
			cin>>name>>roll_no>>marks;
		}
		
		void display()
		{
			cout<<name<<" "<<roll_no<<" "<<marks<<"\n";
		}
};

int main()
{
	int i;
	class student s[2];// Objects of a class
	for(i=0;i<=1;i++)
	{
		s[i].get();
	}
	for(i=0;i<=1;i++)
	{
		s[i].display();
	}
}
