using namespace std;
#include<iostream>
class student
{
	private:
		int roll_no;
		char name[20];
		float  marks;
		
	public:
		void get();
		void display();
};

void student :: get()//outside the class definition
{
	cout<<"Enter the roll number, name and marks\n";
	cin>>roll_no>>name>>marks;
}

void student :: display()

{
	cout<<roll_no<<" "<<name<<" "<<marks;
}

int main()
{
	class student s;
	s.get();
	s.display();
}
