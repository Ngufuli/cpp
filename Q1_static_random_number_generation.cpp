using namespace std;
#include<iostream>
class employ
{
	static int employ_number;
	char name[20];
	float salary;
	public:
		void get()
		{
			cout<<"Enter the Name and Salary of an employee\n";
			cin>>name>>salary;
		}
		void show()
		{
			cout<<"EMP"<<++employ_number<<" "<<name<<" "<<salary<<"\n";
		}
};
int employ::employ_number=0;
int main()
{
	employ e[5];
	int i;
	for(i=0;i<4;i++)
	e[i].get();
	for(i=0;i<=4;i++)
	e[i].show();
}
