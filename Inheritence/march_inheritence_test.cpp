using namespace std;
#include<iostream>
class employee
{
	protected:
		int id;
		string name;
		string dept;
		float salary;
};
class qualification
{
	protected:
		string UG;
		string PG;
		int exp_nce;
};
class calculate : public employee, public qualification
{
	float inc;
	public:
	void show()
	{
		cout<<"Enter the ID\n";
		cin>>id;
		cout<<"\nEnter name\n";
		cin>>name;
		cout<<"\nEnter department\n";
		cin>>dept;
		cout<<"\nEnter salary\n";
		cin>>salary;
		cout<<"\nEnter Undergraduate degree\n";
		cin>>UG;
		cout<<"\nEnter Postgraduate degree\n";
		cin>>PG;
		cout<<"\nEnter level of experience\n";
		cin>>exp_nce;
		
		if(exp_nce>=10)
		{
			inc=(salary*15)/100;
			
		}
		else
		inc=(salary*5)/100;
		cout<<name<<"\t"<<id<<"\t"<<dept<<"\t"<<salary<<"\t"<<inc;
	}
	
	
};
int main()
{
	calculate c;
	c.show();
}
