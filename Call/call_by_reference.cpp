//call by reference
using namespace std;
#include<iostream>
int main()
{
	int x=12;
	int &y=x;
	y++;
	cout<<x;
}
