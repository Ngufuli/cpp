using namespace std;
#include<iostream>
void add(int a, int b);
void add(int a, int b, int c);
void add(float a, float b);
int main()
{
	add(1,2);
	add(1.2f,5.6f);
	add(1,3,5);
}
void add(int a, int b)
{
	cout<<"\n"<<a+b;
}
void add(int a, int b, int c)
{
	cout<<"\n"<<a+b+c;
}
void add(float a, float b)
{
	cout<<"\n"<<a+b;
}
