//function with default arguments
using namespace std;
#include<iostream>
void add(int a=12, int b=34);
int main()
{
	add();
}

void add(int a, int b)
{
	cout<<"The sum is "<<a+b;
}
