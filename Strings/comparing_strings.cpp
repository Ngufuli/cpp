//comparison of two strings
using namespace std;
#include<iostream>
int main()
{
	string s1,s2;
	cout<<"Enter the first string\n";
	getline(cin,s1);
	cout<<"Enter the second string\n";
	getline(cin,s2);
	if(s1==s2)
	cout<<"The two string are equal\n";
	else if(s1>s2)
	cout<<"First string is greater than the second string\n";
	else
	cout<<"First string is smaller than the second string\n";
}
