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
	student s;
	s.get();
	ofstream ob;
	ob.open("student.dat",ios::binary);
	ob.write((char *)&s,sizeof(s));
	ob.close();
}
