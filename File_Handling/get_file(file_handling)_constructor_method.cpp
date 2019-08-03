//read/write using get()
//and put() function

using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	ifstream ob("K17KW.txt");//constructor method
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
			cout<<ch;
		}
	}
}
