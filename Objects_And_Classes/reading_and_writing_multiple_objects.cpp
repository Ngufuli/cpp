/*
	writing and reading class and objects from file.
*/	
using namespace std;
#include<iostream>
#include<fstream>
class student
{
	char name[20];
	int roll;
	float marks;
	public:
		void get()
		{
			cout<<"Enter name roll and marks\n";
			cin>>name>>roll>>marks;
		}
};
int main()
{
	student s[5];
	int i;
	
	ofstream ob("student.dat",ios::binary);
	for(i=0;i<=4;i++)
	{
		s[i].get();
		ob.write((char *)&s[i],sizeof(s[i]));
	}
	
	ob.close();
}
