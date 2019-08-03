#include<iostream>
using namespace std;
class A
{
    protected:
    int x, y, z;
    public:
    void getdata()
    {
	
        
        cin>>x>>y>>z;
        if(x==y||y==z||z==x)
    {
       	cout<<"Invalid input";
        exit(1);
	} 
        
    }
};   
class B : public A
{
    public:
    void check()
    {
   
        if(x<y&&x<z)
        cout<<x;
        else if(y<z)
        cout<<y;
        else
        cout<<z;
    }
};
int main()
{
    B ob1;
    ob1.getdata();
    ob1.check();
    return 0;
}
