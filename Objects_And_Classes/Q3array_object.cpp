using namespace std;
#include<iostream>
class student{
	int roll_no;
	char name[30];
	int phy,math,che;
	int total_marks;
	
	public:
		void get()
		{
			cout<<"Enter the roll number\n";
			cin>>roll_no;
			cout<<"Enter the name\n";
			cin>>name;
			cout<<"Enter the physics marks\n";
			cin>>phy;
			cout<<"Enter the maths marks\n";
			cin>>math;
			cout<<"Enter the chemistry marks\n";
			cin>>che;
		}
		
		void display()
		{
			cout<<"Roll Number: "<<roll_no<<"\n";
			cout<<"Name: "<<name<<"\n";
			cout<<"Physics: "<<phy<<"\n";
			cout<<"Maths: "<<math<<"\n";
			cout<<"Chemistry: "<<che<<"\n";
			cout<<"Total Marks: "<<phy+math+che<<"\n";
		}
};

int main()
{
	class student s[10];
	int i;
	
	for(i=0;i<=4;i++)
		s[i].get();
	
	for(i=0;i<=4;i++)
		s[i].display();
	
}
