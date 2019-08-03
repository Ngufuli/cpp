/*	DESTRUCTORS IN C++
	This is a member function of a class which is automatically called when an object is deleted or destroyed
	or goes out of scope
	
	Point regarding destructor
	1->A destructor is having same name as that of class, BUT it starts with a (tilde)sign (~)
	2->The syntax of a destructor is given by
	
	    ~destructor()
	    {
	 		definition
	    }
	
	3->There is only one type of a destructor and destructor overloading is not possible
	4->Destructors do not take any parameter and there is no return type of the destructor
	5->A destructor is called in the reverse order in which the objects are created
*/


using namespace std;
#include<iostream>
class abc
{
	public:
		abc()
		{
			cout<<"Constructor called\n";
		}
		~abc()
		{
			cout<<"Destructor called\n";
		}
		
};
int main()
{
	{
		abc ob;
	}
	abc ob1;
}
