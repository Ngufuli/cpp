using namespace std;
#include<iostream>
#include<string.h>
class customer
{
	string name,DOB;
	int acc_name;
	float bal_sht;
	public:
		customer(string name ,int  acc_name ,string DOB ,float bal_sht )
		{
			this->name=name;
			this->acc_name=acc_name;
			this->DOB=DOB;
			this->bal_sht=bal_sht;
		}
		~customer()
		{
			
		}
		void display()
		{
			cout<<"Name:"<<name<<" Account name:"<<acc_name<<" Date of birth:"<<DOB<<" Balance sheet:"<<bal_sht;
		}
	
};
int main()
{
	customer ob("Johnson",902873,"12-10-1998",12000.50);
	ob.display();

	
}

