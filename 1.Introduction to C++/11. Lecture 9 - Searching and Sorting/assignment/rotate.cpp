#include<iostream>
using namespace std;

void rotatebyn(int arr[], int n)
{
	int rot,count=0;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	//rotate by n elements
	cout<<"Enter how many element you want to rotate"<<endl;
	cin>>rot;
	for(int i=0; count<rot;)
	{
		int current = arr[i];
		for(int j=i; j<n-1; j++)
		{
			arr[j] = arr[j+1];
		}
		arr[n-1] = current;
		count++;
	}
	//printing array
	for(int j=0; j<n; j++)
	{
		cout<<arr[j]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n;
	cout<<"Enter the number of queries"<<endl;
	cin>>n;
	int arr[15];
	for(int i =0; i<n; i++)
	{
		int size;
		cout<<"Enter size of array"<<endl;
		cin>>size;
		rotatebyn(arr,size);
	}
}
