#include<iostream>
using namespace std;

void pushzeros(int arr[],int n)
{
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int count = 0;
	//pushing zeros
	for(int i=0; count<n;)
	{
		int current = arr[i];
		int l=1;
		if(current == 0)
		{
			for(int j=i; j<n-1; j++)
			{
				arr[j] = arr[j+1];
			}
			arr[n-1] = current;
			l=2;
		}
		i++;
		if(l==2)
		{
			i--;
		}
		count++;
	}
	//printing the elements
	for(int j=0; j<n; j++)
	{
		cout<<arr[j]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter number of queries you want to run"<<endl;
	cin>>n;
	int arr[15];
	for(int i=0; i<n; i++)
	{
		int size;
		cout<<"Enter size of array"<<endl;
		cin>>size;
		pushzeros(arr,size);
	}
}
