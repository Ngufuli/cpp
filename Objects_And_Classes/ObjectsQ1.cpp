using namespace std;//
#include<iostream>
class rectangle
{
	private:
		int length;
		int breadth;
		
	public:
		void get()
		{
			cout<<"Enter length and breadth\n";
			cin>>length>>breadth;
		}
		
		void display()
		{
			cout<<"The area of the rectangle is"<<length*breadth;
		}
};

int main()
{
	class rectangle r;// Objects of a class
	r.get();
	r.display();
}
