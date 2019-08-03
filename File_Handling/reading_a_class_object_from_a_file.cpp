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
			cout<<name<<"	"<<roll<<"	"<<marks<<"\n";
		}
};
int main()
{
	student s[5];
	int i;
	ifstream ob;
	ob.open("student.dat",ios::binary);
	for(i=0;i<=4;i++)
	{
		ob.read((char *)&s[i],sizeof(s[i]));
		s[i].show();		
	}
}
