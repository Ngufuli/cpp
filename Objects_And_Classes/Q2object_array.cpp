using namespace std;
#include<iostream>
class book{
	char name[20];
	char author[20];
	int pages, price;
	
	public:
		void get()
		{
			cout<<"Enter the name, author and pages and price of the books\n";
			cin>>name>>author>>pages>>price;
		}
		
		void display()
		{
			if(price>200 && pages>50)
			cout<<name<<" "<<author<<" "<<pages<<" "<<price<<"\n";
		}
}b[5];

int main()
{
	int i,n;
	cout<<"Enter the number of the books\n";
	cin>>n;
	for(i=1;i<=n;i++)
	b[i].get();
	
	for(i=1;i<=n;i++){
		b[i].display();
	}
	
}
