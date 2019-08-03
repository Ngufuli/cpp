using namespace std;
#include<iostream>
void add(int a, int b, int c=89);
int main()
{
	add(12,56);
}

void add(int a, int b, int c)
{ 
	cout<<"The sum is "<<a+b+c;
}
