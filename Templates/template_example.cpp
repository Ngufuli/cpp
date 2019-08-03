using namespace std;
#include<iostream>
int top=0;
template <class T>
class stack1
{
	T a[5];
	int i;
	public:
		void get()
		{
			cout<<"Enter the stack elements\n";
			for(i=0;i<=4;i++)
			{
				cin>>a[i];
				top++;
			}
		}
		void show()
		{
			for(i=top-1;i>=0;i--)
			cout<<" "<<a[i];
		}
};
int main()
{
	stack1 <int> ob;
	stack1 <char> ob1;
	ob.get();
	ob.show();
	ob1.get();
	ob1.show();
}
