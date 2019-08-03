#include<iostream>
using namespace std;
class specs{
	struct compnents{
		char name[30];
		int ram;
		int storage;
		float clock_speed;
	}c;
	public:
		void get(){
			cout<<"Enter the name\n";
			cin>>c.name;
			cout<<"Enter the memory\n";
			cin>>c.ram;
			cout<<"Enter the permanent storage capacity\n";
			cin>>c.storage;
			cout<<"Enter the clock speed in GHz\n";
			cin>>c.clock_speed;
		}
		void show(){
			
		}
};
