using namespace std;
#include<iostream>
int main()
{
	int *arr,n,i;
	cout<<"Enter the number of elementes\n";
	cin>>n;
	arr=new int[n];
	cout<<"Enter n elements\n";
	for(i=0;i<=n-1;i++)
	cin>>arr[i];
	cout<<"Entered n elements are\n";
	for(i=0;i<=n-1;i++)
	cout<<"\n\a\t"<<arr[i];
	delete []arr;
}
