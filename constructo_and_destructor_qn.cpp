/*	
	Suppose you are the class incharge of your class and the school has given you responsibility of sending the 
	results to the parents of of the students. New students are enrolled in your class. For this you will be 
	requiring the address detalils of the students like student name, fathers name, house number, street, colony
	name, village, city , district, country and zipcode of the new student. Using constructors and default member
	functions. Create a class for entering the required address details of the student. Use the destructors to
	 destruct the memory and show the detail of the student is closed
*/
using namespace std;
#include<iostream>
#include<string.h>
class details
{
	string s_name, p_name, street_n,colony_n, village, city, district,country;
	int h_number,zip_code;
	public:
		details(string s_name, string p_name, string street_n, string colony_n, string village,string city, string district,string country, int h_number, int zip_code)
		{
			this->s_name=s_name;
			this->p_name=p_name;
			this->street_n=street_n;
			this->colony_n=colony_n;
			this->village=village;
			this->city=city;
			this->district=district;
			this->country=country;
			this->h_number=h_number;
			this->zip_code=zip_code;
		}
		~details()
		{
			
		}
		void show()
		{
			cout<<"\nThe details of the new student are:\n";
			cout<<"\nName: "<<s_name;
			cout<<"\nParent name: "<<p_name;
			cout<<"\nStree name: "<<street_n;
			cout<<"\nColony: "<<colony_n;
			cout<<"\nVillage: "<<village;
			cout<<"\nCity: "<<city;
			cout<<"\nDistrict: "<<district;
			cout<<"\nCountry: "<<country;
			cout<<"\nHouse number: "<<h_number;
			cout<<"\nZip Code: "<<zip_code;
		}
};
int main()
{
	details ob("Nicolas","Peter","Mbezi","Kawe","Africana","Dar-Es-Salaam","Kinondoni","Tanzania",1278 ,255);
	ob.show();
	
}
