#include<iostream>
using namespace std;

void populate(int arr[])
{
	int n,j=1,k;
	cout<<endl;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		if(n%2==0)
		{
			if(j<=n)
			{
				arr[i]=j;
				cout<<arr[i]<<" ";
				k=j;
				j=j+2;
			}
			else
			{
				k++;
				arr[i]=k;
				cout<<arr[i]<<" ";
				k=k-3;
			}
		}
		else
		{
			if(j<=n)
			{
				arr[i]=j;
				cout<<arr[i]<<" ";
				k=j;
				j=j+2;
			}
			else
			{
				k--;
				arr[i]=k;
				cout<<arr[i]<<" ";
				k--;
			}
		}
	}
}

int main()
{
	int num;
	cout<<"Enter how many times you want to call the function"<<endl;
	cin>>num;
	int arr[100];
	for(int i=0; i<num; i++)
	{
		populate(arr);
	}
}
