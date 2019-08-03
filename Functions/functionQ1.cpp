using namespace std;
#include<iostream>
float interest(int a, int b, int c);
int main()
{
	
	float a,b,c;
	cout<<"Enter the principle\n ";
	cin>>a;
	cout<<"Enter the rate\n";
	cin>>b;
	cout<<"Enter the time\n";
	cin>>c;
	cout<<"The interest is:"<<interest(a,b,c);
	
}
float interest(int a, int b, int c)
{
	float d;
	d=(a*b*c)/100;
	return d;
}
