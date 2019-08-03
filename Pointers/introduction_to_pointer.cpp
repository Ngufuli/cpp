//a pointer is a variable that can store the address of another variable of similar type
//it means an integer variable is capable of storing the address of integer variable only
//systax to declare a pointer variable is given as    data_type  *pointer_variable;
/*
   int *p
   float *x;
*/

using namespace std;
#include<iostream>
int main()
{
	int *p;
	int x=2;
	cout<<&p;
	cout<<"\n"<<*p;
	return 0;
}

