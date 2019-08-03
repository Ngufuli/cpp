using namespace std;
#include<iostream>
class student
{
	static int rollno;
	char name[20];
	float marks;
		public:
			void get()
			{
				cout<<"Enter Name and Marks";
				cin>>name>>marks;
			}
			void show()
			{
				cout<<++rollno<<" "<<name<<" "<<marks<<"\n";
			}
};
int main()
{
	student s[4];
	int i;
	for(i=0;i<=3;i++)
	s[i].get();
	for(i=0;i<=3;i++)
	s[i].show();
}
