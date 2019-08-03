using namespace std;
#include<iostream>
class abc
{
	public:
		virtual void show()
		{
			cout<<"Show base class\n";
		}
};
class def : public abc
{
	public:
		void show()
		{
			cout<<"Show derived class\n";
		}
};
int main()
{
	abc ob,*bptr;
	bptr=&ob;
	def ob1;
	bptr->show();
	bptr=&ob1;
	bptr->show();
}
