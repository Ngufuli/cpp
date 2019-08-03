#include<iostream>
using namespace std;
class employee
{
	public:
		struct emp
		{
			char name[30];
			int age, salary;
			float height;
		}z;
	
	int get_detail();
	int display();
};
int employee :: get_detail()
{
	cout<<"Enter the name\n";
		cin>>z.name;
		cout<<"Enter the age\n";
		cin>>z.age;
		cout<<"Enter height\n";
		cin>>z.height;
		cout<<"Enter salary";
		cin>>z.salary;
}
int employee :: display()
{
	if(z.salary>=25000)
	cout<<"Name:"<<z.name<<"\tAge:"<<z.age<<"\tHeight:"<<z.height<<"\tSalary:"<<z.salary;
	cout<<"\n";
}
int main()
{
	employee *e;
	int n, i;
	cout<<"Enter number of employee\n";
	cin>>n;
	e=new employee[n];
	for(i=0;i<=n-1;i++)
	e[i].get_detail();
	for(i=0;i<=n-1;i++)
	e[i].display();
}
