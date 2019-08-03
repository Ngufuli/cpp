//WAP to read a file and count the number of vowels present in it
//WAP to read a file and copy its content to another file

//read/write using get()
//and put() function

using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	ifstream ob("K17KW.txt");//constructor method
	char ch;
	int count;
	if(ob==NULL)
	{
		cout<<"File not opened\n";
	}
	else
	{
		while(ob.eof()==0)
		{
			ob.get(ch);
			if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			count++;
		}
	}
	cout<<"The number of vowels present in the file are:	"<<count;
}
