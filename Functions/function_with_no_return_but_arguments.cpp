using namespace std;
#include<iostream>
void add(int a,int b);//function declaration // and it is not to give variable names here
int main()
{
	int a,b;
	cout<<"Enter a and b\n";
	cin>>a>>b;
	add(a,b);//function call
}
void add(int a,int b)
{
	int c;
	c=a+b;
	cout<<"Sum is	"<<c;
}
