using namespace std;
#include<iostream>
int main()
{
	int n,i,fact;
	for(n=1;n<=10;n++)
	{
		fact=1;
		for(i=1;i<=n;i++)
		{
			fact=fact*1;
		}
		cout<<"Factorial of:" <<n<<" "<<fact<<"\n";
	}
}
