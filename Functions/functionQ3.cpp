using namespace std;
#include<iostream>
int great(int a, int b, int c);
int main()
{
	int a,b,c;
	cout<<"Enter three numbers\n";
	cin>>a>>b>>c;
	cout<<"The greatest number is: "<<great(a,b,c);
}
int great(int a, int b, int c)
{
	if(a>b&&a>c)
	return a;
	else if(b>c)
	return b;
	else 
	return c;
}
