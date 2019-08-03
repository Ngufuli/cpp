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
		void show()
		{
			cout<<name<<" "<<roll<<" "<<marks;
		}
};
int main()
{
	student s;
	ifstream ob;
	ob.open("student.dat",ios::binary);
	ob.read((char *)&s,sizeof(s));
	s.show();
}
