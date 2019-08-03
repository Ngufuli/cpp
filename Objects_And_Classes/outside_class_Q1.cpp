using namespace std;
#include<iostream>
class employ
{
	private:
		int ID;
		char name[30];
		int working_day;
		int salary;
		int total_salary;
		
	public:
		void get();
		void display();
};

void employ :: get()
{
	cout<<"Enter ID, name and working days\n";
	cin>>ID>>name>>working_day;	
}

void employ :: display()
{
		cout<<"\nID : "<<ID<<" "<<"\nName : "<<name<<" "<<"\nTotal salary : "<<1000*working_day;
}

int main()
{
	class employ e;
	e.get();
	e.display();
}
