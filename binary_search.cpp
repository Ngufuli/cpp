using namespace std;
#include<iostream>
int main()
{
	int a[20],i,beg,end,mid,ele;
	cout<<"Enter the array\n";
	for(i=0;i<=9;i++)
	cin>>a[i];
	beg=0,end=9;
	mid=(beg+end)/2;
	cout<<"Enter the element to search\n";
	cin>>ele;
	while(beg<=end)
	{
		if(a[mid]==ele)
		{
			cout<<"Search is successful\n";
			break;
		}
		else if(ele<a[mid])
		beg=mid+1;
		else
		end=mid-1;
		mid=(beg+end)/2;
		
	}
	if(beg>end)
	cout<<"Search is not succesful\n";
}
