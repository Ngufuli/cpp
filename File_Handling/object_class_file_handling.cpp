/*	wap to declare a class employ, with empno,name,salary,and city as the data members,
	write down the details of the five employees onto the file employ.dat and read the same file, 
	print those employee having salary greater than 10,000.*/
	
using namespace std;
#include<iostream>
#include<fstream>
class employee
{
	int empno;
	char name[20];
	float salary;
	char city[20];
	
	public:
		void get()
		{
			cout<<"\nEnter name empno salary and city\n";
			cin>>name>>empno>>salary>>city;
		}
		
		void show()
		{
			if(salary>10000)
			cout<<"\n"<<name<<empno<<"  "<<salary<<"  "<<city<<"\n";
		}
	
};
int main()
{
	employee e[5];
	fstream ob;
	ob.open("employee.dat",ios::binary|ios::out);
	int i;
	for(i=0;i<=4;i++)
	{
		e[i].get();
		ob.write((char*)&e[i],sizeof(e[i]));
	}
	for(i=0;i<=4;i++)
	{
		e[i].show();
		ob.read((char *)&e[i],sizeof(e[i]));
	}
	ob.close();
}
	
