#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
	int key;
	int arr[]={12,3,17,8,34,56,9};//
	vector<int> v(arr, arr+7);//initialize vector 
	vector<int>::iterator iter;
	cout<<"Enter Key\n";
	cin>>key;
	iter=find(v.begin(),v.end(),key);//finds integer key in
	if(iter!=v.end())//found element
	cout<<"Element "<<key<<" found"<< endl;
	else
	cout<<"Element not found";
}
