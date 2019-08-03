using namespace std;
#include<iostream>
class abc
{
	int a, b, c;
	
	public:
		void get()
		{
			cout<<"Enter the first number";
			cin>>a;
			
			cout<<"Enter the second number";
			cin>>b;
			
			cout<<"Enter the third number";
			cin>>c;
		}
			friend void great(abc ob);
};
void great(abc ob)
{
	if(ob.a>ob.b&&ob.a>ob.c)
	cout<<"Greatest number is:"<<ob.a;
	else if(ob.b>ob.c)
	cout<<"Greatest number is:"<<ob.b;
	else
	cout<<"Greatest number is:"<<ob.c;
}

int main()
{
	abc x;
	x.get();
	great(x);
}
