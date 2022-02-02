#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	//sorting
	int temp;
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1-i; j++)
		{
			if(arr[j+1]<arr[j])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	for(int j=0; j<n; j++)
    {
		cout<<arr[j]<<" ";
	}
	cout<<endl;
}

int main()
{
	int arr[20],n,s;
	cout<<"Enter number of test cases"<<endl;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		cout<<"Enter size of array"<<endl;
		cin>>s;
		bubblesort(arr,s);
	}
}
