/*	WAP a program to declare a class employee with emp_no, name salary and department as a data member, 
	initialize the data member of a class using parametarized constructor and display the result*/
	
using namespace std;
#include<iostream>
class employee
{
	int emp_no;
	string name;// name is object of string 
	float sal;
	string dept;
	public:
		employee(int e,string n,float s,string d)
		{
			emp_no=e;
			name=n;
			sal=s;
			dept=d;
		}
		void show()
		{
			cout<<emp_no<<"\t"<<name<<"\t"<<sal<<"\t"<<dept<<"\n";
		}
};
int main()
{
	employee e(1,"NICO",24000,"CSE");
	e.show();
}
