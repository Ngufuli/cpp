/*	
	DEFINING A CONSTRUCTOR OUTSIDE THE CLASS
	A constructor can be defined outside the class with the help of the following syntax
	
	class_name::constructor_name(arguments)	                                     ::  //scope resolution
*/

using namespace std;
#include<iostream>
class employee
{
	int emp_no;
	string name;
	float sal;
	string dept;
	public:
		employee(int e,string n,float s,string d);
		void show();
};
employee :: employee(int e,string n,float s, string d)
{
	emp_no=e;
	name=n;
	sal=s;
	dept=d;
}
void employee::show()
{
	cout<<emp_no<<"\t"<<name<<"\t"<<sal<<"\t"<<dept<<"\t";
}
int main()
{
	employee e(1,"NICO",24000,"CSE");
	e.show();
}

