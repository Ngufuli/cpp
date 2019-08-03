using namespace std;
#include<iostream>
int swap(int *a, int *b);
int main()
{
	int a,b;
	
	cout<<"\nEnter value A\n";
	cin>>a;
	
	cout<<"\nEnter value B\n";
	cin>>b;
	
	cout<<"\nThe values of A and B before swap are:\n";
	cout<<a<<b;
	
	swap(&a,&b);
	cout<<"\nThe values of A and B after swap are:\n";
	cout<<a<<"	"<<b;
}
int swap(int *a,int *b)
{
	int c;
	c=*a;*a=*b;*b=c;
}
