#include<iostream>
using namespace std;
class A
{
    protected:
    int x, y, z;
    
};   
class B : public A
{
    public:
    	void getdata()
    {
        cout<<"Enter the first number\n";
        cin>>x;
        cout<<"Enter the second number\n";
        cin>>y;
        cout<<"Enter the third number\n";
        cin>>z;
    }
    void check()
    {
        if(x==y||y==z)
        cout<<"Invalid input\n";
        else if(x<y&&x<z)
        cout<<x<<": Is the smallest number\n";
        else if(y<z)
        cout<<y<<": Is the smallest number\n";
        else
        cout<<"The smallest number is: "<<z;
    }
};
int main()
{
	B ob1;
	ob1.getdata();
    B ob;
    ob.check();
}
