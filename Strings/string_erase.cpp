//erase()
//deletes the contents of the string
using namespace std;
#include<iostream>
int main()
{
	string s="Hello world\n";
	s.erase(3,6);//3.erase from the third location, 4.number of characters to be erased
	cout<<s;
}
