using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	ifstream ob("K17KW.txt");//constructor method
	string name;
	int roll;
	float marks;
	if(ob==NULL)
	{
		cout<<"File not opened\n";
	}
	else
	{
		ob>>name>>roll>>marks;
		cout<<name<<" "<<roll<<" "<<marks;
	}
}
