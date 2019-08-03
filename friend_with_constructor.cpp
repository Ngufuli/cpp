/*
	One person has the information about the temperature and humidity value of the day. He shares this information
	with his family members only. Now another person Y wants these values but he is not a family member. Now the 
	question is, how does the person Y take the information from person X?
*/
using namespace std;
#include<iostream>
#include<stdio.h>
class X
{
	float temperature;
	float humidity;
	public:
		X(float temperature, float humidity)
		{
			this->temperature=temperature;
			this->humidity=humidity;
		}
		friend void show(X ob);
	
};
	 void show(X ob)
	{
			cout<<"The temperature is: ";
			cout<<ob.temperature;
			cout<<"\nThe humidity is: ";
			cout<<ob.humidity;
}
int main()
{
	X ob1(12,34);
	show(ob1);
}
