#include<iostream>
using namespace std;

void checkrotation(int arr[], int n)
{
	int count=0,ch=0;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	//checking number of rotation
	for(int j=0; j<n; j++)
	{
		int current = arr[j];
		if(current>ch)
		{
			ch = current;
			count++;
			if(count == n)
			{
				count =0;
			}
		}
		else
		{
			break;
		}
	}
	cout<<count<<endl;
}

int main()
{
	int n;
	cout<<"Enter number of test cases"<<endl;
	cin>>n;
	int arr[10];
	for(int i=0; i<n; i++)
	{
		int size;
		cout<<"Enter size of array"<<endl;
		cin>>size;
		checkrotation(arr,size);
	}
}
