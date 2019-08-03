using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	//ofstream ob("K17KW.txt");//constructor method
	ofstream ob;
	ob.open("K17KW.txt");
	string name;
	int roll;
	float marks;
	cout<<"Enter name roll and marks\n";
	cin>>name>>roll>>marks;
	ob<<name<<" "<<roll<<" "<<marks;
}
