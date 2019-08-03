using namespace std;
#include<iostream>
void interest(float a, float b, float c=2);
int main()
{
	float a, b;
	cout<<"Enter Principle(A) and Rate(B)\n";
	cin>>a>>b;
	interest(a,b);//Calling the function
}
void interest(float a, float b, float c)
{
	cout<<"The Interest is: "<<(a*b*c)/100;
	
}
