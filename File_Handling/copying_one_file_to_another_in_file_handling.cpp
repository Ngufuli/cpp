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
	ofstream ob1("K17KW_copy.txt");
	char ch;
	if(ob==NULL)
	{
		cout<<"File not opened\n";
	}
	else
	{
		while(ob.eof()==0)
		{
			ob.get(ch);
			ob1.put(ch);
		}
	}
}
