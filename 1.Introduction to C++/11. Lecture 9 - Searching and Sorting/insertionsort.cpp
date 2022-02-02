#include<iostream>
using namespace std;

void insertionsort(int arr[])
{
	int n,l;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	//insertionsort
	/*for(int i=1; i<n; i++)
	{
		int a;
		l=1;
		for(int j=i-1; j>=0; j--)
		{
			if(arr[i]<arr[j])
			{
				a=j;             // finding index
				l=2;
			}
		}
		if(l==2)
		{
			int cap = arr[i];    //capturing current value
			for(int k=i-1; k>=a; k--)
			{
				arr[k+1] = arr[k];
			}
			arr[a] = cap;       //placing captured value in right place
		}
	}*/
	for(int i=1; i<n; i++)
	{
		int current = arr[i];
		int j= i-1;
		for(;j>=0; j--)
		{
			if(current < arr[j])
			{
				arr[j+1] = arr[j];
			}
			else
			{
				break;
			}
		}
		arr[j+1] = current;
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

