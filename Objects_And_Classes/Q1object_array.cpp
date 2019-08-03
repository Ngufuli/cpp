using namespace std;
#include<iostream>
class employee
{
	int ID;
	char name[30];
	float salary;
	
	public:
		void get()
		{
			cout<<"Enter the ID, name and salary of an employee\n";
			cin>>ID>>name>>salary;
		}
		
		void display()
		{
			if(salary>10000)
			cout<<ID<<" "<<name<<" "<<salary<<"\n"; 	
		}
}e[3];

int main()
{
	int i;
	for(i=0;i<=2;i++)
	e[i].get();
	for(i=0;i<=2;i++)
	e[i].display();
}
