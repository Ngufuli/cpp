using namespace std;
#include<iostream>
void rev(int a);
int main()
{
	int a,d;
	cout<<"Enter a number \n";
	cin>>a;
	rev(a);//function call
}
void rev(int a)
{
	int d=0,t;
	while(a!=0)
	{
		t=a%10;
		d=d*10+t;
		a=a/10;
	}
		cout<<"The reverse of the number is:	"<<d;

}
