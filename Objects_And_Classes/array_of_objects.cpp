using namespace std;
#include<iostream>
class student
{
	//private members are not mandatory, they are included by default
	int roll_no;
	char name[20];
	float marks;
	
	public:
		void get()
		{
			cout<<"Enter the details of the student\n";
			cin>>roll_no>>name>>marks;
		}
		void show()
		{
			cout<<roll_no<<" "<<name<<" "<<marks<<"\n";
		}
};

int main()
{
	class student s[5];
	int i;
	int n;
	
	cout<<"Enter the number of students\n";
	cin>>n;
	for(i=0;i<=n;i++)
		s[i].get();
	for(i=0;i<=n;i++)
		s[i].show();
	
}
