#include<iostream>
using namespace std;

int unique(int arr[])
{
	int n,j=0;
	cout<<endl;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n;)
	{
		if(i!=j)
		{
			if(arr[j]==arr[i])
			{
				j++;
				i=0;
				continue;
			}
		}
		i++;
	}
	return arr[j];
}

int main()
{
	int n;
	cout<<"Enter the number of queries"<<endl;
	cin>>n;
	int arr[50];
	for(int i=0; i<n; i++)
	{
		cout<<unique(arr);
	}
}
