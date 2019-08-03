#include<iostream>
#include<fstream>
#include<string.h>
#include<vector>
#include<conio.h>

using namespace std;
class reservation{
	int age;
	char name[30];
	
	public:
		void get(){
			cout<<"Enter your name\n";
			cin>>name;
			cout<<"Enter your age\n";
			cin>>age;
			cout<<"Your ticket is booked\n";
		}
		int i;
		void show(){
			if(age>=5 && age<=90)
			cout<<"Name:"<<name<<"\tAge:"<<age<<endl;
			else
			cout<<"Not available\n";
		}
		int option();
};
	int option()
	{
			int z;
			cout<<""<<endl;
			cout<<"Press[1] to book a ticket\n";
			cout<<"Press[2] to get the schedule\n";
			cout<<"Press[3] to view the chart\n";
			cin>>z;
			if(z>=1 || z<=3)
			return z;
	}
int main()
{
	int n;
	cout<<"\t\t\tSELECT YOUR TRANSPORT ROUTE\n"<<endl;
	cout<<"1.Dar es salaam to Dodoma        FARE:100\n";
	cout<<"2.Dar es salaam to Mwanza        FARE:200\n";
	cin>>n;
	if(n==1)
	{
		reservation c,b[15];
 		int i,z;
 		z=option();
 		if(z==1)
		 { 
 			c.get();
 			ofstream ob;
 			ob.open("reservaion.dat",ios::app);
 			if(ob==NULL)
 				{
 					cout<<"file cannot open";
 					exit(1);
	 	 		}
 			ob.write((char *)&c,sizeof(c));
 			ob.close();
		} 
		 	else if(z==2)
	  		{
	  			ifstream ob;
	  			ob.open("reservaion.dat",ios::binary);
	  			cout<<"Seat No- "<<"NAME   "<<" AGE  "<<endl;
	  			for(i=0;i<=9;i++)
	  			{
	  				ob.read((char*)&b[i],sizeof(b[i]));
	  	 			b[i].show();
	  			}
	  		}
	  		else
	  		{
	  			cout<<"INVALID INPUT"<<endl;
	  		}
	 }
	 		else if(n==2)        
			{

 			reservation c,b[10];
 			int i,z;
 			z=option();
 			if(z==1)
 			{ 
 				c.get();
 				ofstream ob;
 				ob.open("reservation.dat",ios::app);
 				if(ob==NULL)
 				{
 					cout<<"File cannot open";
 					exit(1);
	 			}
 					ob.write((char *)&c,sizeof(c));
 					ob.close();
 	 		}
 	 
	  			else if(z==3)
	  			{
	  	ifstream ob;
	  		ob.open("reservation.dat",ios::binary);
	  	for(i=0;i<=9;i++)
	  	{
	  	ob.read((char*)&b[i],sizeof(b[i]));
	  	 b[i].show();
	  	}
	  			}
	  			else
	  			{
	  				cout<<"\n";
	 			}
	  		}
}

