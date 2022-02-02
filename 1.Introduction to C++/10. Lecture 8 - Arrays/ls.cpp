#include<iostream>
using namespace std;

int foundIndex(int arr[])
{
	int m,index;
	cout<<"Enter the number of elements of array"<<endl;
	cin>>m;
	cout<<"Enter the elements of array"<<endl;
	for(int j = 0; j<m; j++)
	{
		cin>>arr[j];
	}
	int num;
	cout<<"Enter the number you want to find the index for"<<endl;
	cin>>num;
	for(int k=0; k<m; k++)
	{
		if(num == arr[k])
		{
			index = k;
			return index;
		}
	}
	return -1;
}

int main()
{
	int n,ans;
	cout<<"Enter number of times you want to find the index"<<endl;
	cin>>n;
	int arr[100];
	for(int i = 0; i<n; i++)
	{
		cout<<foundIndex(arr);
		cout<<endl;
	}
}
