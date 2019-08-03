using namespace std;
#include<iostream>
#include<stdlib.h>
class time1
{
	public:
		int hr,min;
		void get()
		{
			cin>>hr>>min;
		}
		int hour()
		{
			return hr;
		}
		int minute()
		{
			return min;
		}
};
class time2//schaudhary3211@gmail.com
{
	int hr,min;
	public:
		time2()
		{
			
		}
		time2(time1 t)//parametarized constructor
		{
			if(t.hour()>24&&t.minute()>59)
			{
				cout<<"Invalid Input";
				exit(0);
			}
			else if(t.hour()>12&&t.hour()<24)
			hr=t.hour()-12;
			else
			
				hr=t.hour();
			    min=t.minute();
			
			
			if((t.hour()==12&&t.hour()<=12) && t.minute()==00)
			cout<<cout<<"NOON";
			else if(t.hour()>=13&&t.hour()<=24)
			cout<<hr<<":"<<min<<"PM";
			else if(t.hour()>=1&&t.hour()<=12)
			cout<<hr<<":"<<min<<"AM";
			else if(t.hour()==00 && t.minute()==00)
			cout<<"MID-NIGHT";
		}
};
int main()
{
	time1 t;
	t.get();
	time2 t1;
	t1=t;//class to class type
	return 0;
}
