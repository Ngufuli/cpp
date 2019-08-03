using namespace std;
#include<iostream>
class employee
{
	protected:
		int id;
		string name, dept;
};
class leave
{
	protected:
		int leaves;
		int days=31;
};
class salary : public employee, public leave
{
	int salary;
	int daily_salary=1500;
	public:
		void calculation()
		{
			cout<<"Enter id, name, dept and number of leaves\n";
			cin>>id>>name>>dept>>leaves;
			salary=(days-leave)*daily_salary;
		cout<<"Name: "<<name<<"\tID: "<<id<<"\tDepartment: "<<dept<<"\tSalary: "<<salary;
		}
		
		
};
int main()
{
	salary s;
	s.calculation();
}
