using namespace std;
#include<iostream>
#include<vector>
int main()
{
	int i;
	vector <int> v(3);//container
	v[0]=12;
	v[1]=34;
	v[2]=56;
	v.push_back(34);//algorithm
	
	cout<<"\nThe size of vector: "<<v.size();
	for(i=0;i<v.size();i++)
	cout<<"\n"<<v[i]<<" ";
	
	v.pop_back();
	cout<<"\nThe size of vector: "<<v.size();
}
