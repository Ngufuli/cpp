#include<vector>
#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,3,4};
	vector <int> v(arr, arr+4);
	for(vector <int> :: iterator itr=v.begin(); itr!=v.end();itr++)
	{
		cout<<*itr;
	}
}
