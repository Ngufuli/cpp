using namespace std;
#include<iostream>
class student
{
	int roll_no;
	string name,section;
	public:
		void get()
		{
			cout<<"Enter the roll number, name and section\n";
			cin>>roll_no>>name>>section;
		}
		void show()
		{
			cout<<"\n"<<roll_no<<"\t"<<name<<"\t"<<section;
		}
};
int main()
{
	student *s;
	int n,i;
	cout<<"Enter the number of students\n";
	cin>>n;
	s=new student[n];
	for(i=0;i<=n-1;i++)
	s[i].get();
	for(i=0;i<=n-1;i++)
	s[i].show();
	delete []s;
}
