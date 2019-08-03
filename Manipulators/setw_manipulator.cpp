//set()
using namespace std;
#include<iostream>
#include<iomanip>//input, output manipulator
int main()
{
	string x,y;
	cout<<"Enter name\n";
	getline(cin,x);
	cout<<"Enter surname\n";
	getline(cin,y);
	cout<<setw(5)<<x<<setw(5)<<y;;//works on screen, when setting the width
}
