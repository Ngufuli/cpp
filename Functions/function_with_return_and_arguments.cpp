using namespace std;
#include<iostream>
int add(int a,int b);//function declaration // and it is not necessary to give variable names here
int main()
{
	int a,b;
	cout<<"Enter a and b\n";
	cin>>a>>b;
	cout<<"Sum is	"<<add(a,b);//function call
}
int add(int a,int b)
{
	int c;
	c=a+b;
	return c;
}
