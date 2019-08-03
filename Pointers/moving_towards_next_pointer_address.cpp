/* moving towards the next pointer address
  ->whenever a number is added to a pointer variable the pointer starts to point to the next address to the memory
  ->The next address is calculated on the basis of the data type
*/
using namespace std;
#include<iostream>
int main()
{
	int x=20;
	int *p=&x;
	cout<<*p;
	*p=*p+1;// it prints the value
	/*
	if we apply p=p+1; // it prints the garbage value 
	*/
	cout<<"\n"<<*p;
}
