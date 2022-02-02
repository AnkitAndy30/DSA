#include<iostream>
using namespace std;

void insertionsort(int arr[])
{
	int n;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	//insertionsort
	for(int i=1; i<n; i++)
	{
		int a=i;
		for(int j=i-1; j>=0; j--)
		{
			if(arr[a]<arr[j])
			{
				int k= arr[a];
				arr[a] = arr[j];
				arr[j] =k;
				a--;
			}
		}
	}
	for(int j=0; j<n; j++)
	{
		cout<<arr[j]<<" ";
	}
}

int main()
{
	int n;
	cout<<"Enter number of queries"<<endl;
	cin>>n;
	int arr[15];
	for(int i=0; i<n; i++)
	{
		insertionsort(arr);
	}
}

