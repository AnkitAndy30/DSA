#include<iostream>
using namespace std;

void rot(int arr[])
{
	int n;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n; i++)
	{
		int k = arr[n-1];
		for(int j=n-1; j>=i; j--)
		{
			arr[j+1] = arr[j];
		}
		arr[i] = k;
	}
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[10];
	rot(arr);
}
