#include<iostream>
using namespace std;

void sort012(int arr[], int n)
{
	int count=0;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	//sorting 0 1 2
	for(int i=0; count<n;count++)
	{
		int l=1;
		if(arr[i]==0)
		{
			i++;
			continue;
		}
		else if(arr[i]==1)
		{
			for(int j=i+1; j<n; j++)
			{
				if(arr[j]==0)
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp; 
					break;
				}
			}
			i++;
		}
		else
		{
			for(int k = i+1; k<n; k++)
			{
				if(arr[k]==1)
				{
					int tem = arr[i];
					arr[i] = arr[k];
					arr[k] = tem;
					break;
				}
			}
		}
	}
	for(int i = 0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter number of queries"<<endl;
	cin>>n;
	int arr[15];
	for(int i=0; i<n; i++)
	{
		int size;
		cout<<"Enter size of array"<<endl;
		cin>>size;
		sort012(arr,size);
	}
}
