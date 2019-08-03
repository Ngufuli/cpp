using namespace std;
#include<iostream>
#include<fstream>
int main()
{
	ifstream ob("K17KW.txt");
	ofstream ob1("K17KW_a_copy.txt");
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
			
			if(ch>='a'&&ch<='z')
			ch=ch-32;
			ob1.put(ch);
		}
	}
}
