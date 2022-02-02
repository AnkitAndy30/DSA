#include<iostream>
using namespace std;

int dup(int arr[])
{
	int n,k,l=0;
	cout<<endl;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter elemnts of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>k;
		if(k<=n-2)
		{
			arr[i]=k;
		}
	}
	for(int j=0; j<n;)
	{
		if(j!=l)
		{
			if(arr[l]==arr[j])
			{
				return arr[l];
			}
		}
		if(j==n-1)
		{
			j=0;
			l++;
			continue;
		}
		j++;
	}
}

int main()
{
	int n;
	cout<<"Enter number of queries"<<endl;
	cin>>n;
	int arr[50];
	for(int i=0; i<n; i++)
	{
		cout<<dup(arr);
	}
}
