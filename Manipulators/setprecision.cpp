//endl manip           
using namespace std;
#include<iostream>
#include<iomanip>
int main()
{
	int x=3.1456;
//	cout<<"Hexadecimal notation"<<hex<<x;
//	cout<<endl"Octal notation"<<oct<<x;
//	cout<<ends<<"Decimal notation"<<dec<<042l;
	cout<<setprecision(2)<<fixed<<x;
}
