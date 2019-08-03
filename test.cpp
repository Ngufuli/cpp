#include<iostream>
using namespace std;
class employee
{
	struct attribute{
		char name[30];
		int age;
		float height;
		int salary;
	}a;
	public:
	void get()
	{
		cout<<"Enter the name\n";
		cin>>a.name;
		cout<<"Enter the age\n";
		cin>>a.age;
		cout<<"Enter height\n";
		cin>>a.height;
		cout<<"Enter salary";
		cin>>a.salary;
	}
	void display()
	{
		cout<<"The details of an employee are\n";
		if(a.salary>=25000)
		cout<<"Name:"<<a.name<<"\tAge:"<<a.age<<"\tHeight:"<<a.height<<"\tSalary:"<<a.salary;
		cout<<"\n\n";
	}
};
int main()
{
	employee *e;
	int n,i;
	cout<<"Enter the number of employee\n";
	cin>>n;
	e=new employee[n];
	for(i=0;i<=n-1;i++)
	e[i].get();
	for(i=0;i<=n-1;i++)
	e[i].display();
}
