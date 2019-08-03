/*	WAP to create a generic class which will take input of an integer array, float array and calculate the 
	sum of all.The number of elements is 5
*/
using namespace std;
#include<iostream>
template <class T>
class sum
{
	T a[5] ;
	public:
		void get()
		{
			cout<<"Enter five values\n";
			for(int i=0;i<=4;i++)
			cin>>a[i];
		}
		void total()
		{
			T sum=0;
			for(int i=0;i<=4;i++)
			{
				sum=sum+a[i];
			}
			cout<<"The sum is: "<<sum;
			cout<<"\n\n";
		}
		
		
};
int main()
{
	sum <int> ob;
	sum <float> ob1;
	ob.get();
	ob.total();
	ob1.get();
	ob1.total();
}
