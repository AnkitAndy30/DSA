#include<iostream>
using namespace std;

void bsa(int arr[],int k)
{
	int m;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<k; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter number of test cases"<<endl;
	cin>>m;
	for(int i=0; i<m; i++)
	{
		int a,start = 0,end = k-1,mid = 0;
		cout<<"Enter the number you want to search"<<endl;
		cin>>a;
		while(start<=end)
		{
			mid = (start + end)/2;
			if(a==arr[mid])
			{
				cout<<mid<<endl;
				break;
			}
			else if(a>arr[mid])
			{
				start = mid+1;
			}
			else{
				end = mid-1;
			}
		}
		if(start>end)
		{
			cout<<-1<<endl;
		}
	}
}


int main()
{
	int n;
	int arr[25];
	cout<<"Enter size of array"<<endl;
	cin>>n;
	bsa(arr,n);
}
