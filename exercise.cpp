using namespace std;
#include<iostream>
int main()
{
	int i,t,n,rev=0;
	for(i=101;i<=201;i++)
	{
		rev=0;
		n=i;
		while(n!=0)
	{
		t=n%10;
		rev=rev*10+t;
		n=n/10;
	}
		cout<<"The reverse of a number is:"<<rev<<"\n";	
	}
	
	
	
}
