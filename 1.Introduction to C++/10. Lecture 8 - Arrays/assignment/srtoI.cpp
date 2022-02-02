#include<iostream>
using namespace std;

void sort01(int arr[])
{
	int n,temp;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	cout<<"Enter the elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n;)
	{
		if(arr[i]==1)
		{
			for(int j=n-1; j>i; j--)
			{
				if(arr[j]==0)
				{
					temp=arr[j];
					arr[j] = arr[i];
					arr[i] = temp;
					break; 
				}
			}
		}
		cout<<arr[i]<<" ";
		i++;
	}
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter the number of queries"<<endl;
	cin>>n;
	int arr[25];
	for(int i=0; i<n; i++)
	{
		sort01(arr);
	}
}
