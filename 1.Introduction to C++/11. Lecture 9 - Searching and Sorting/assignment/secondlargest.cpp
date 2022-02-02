#include<iostream>
#include<climits>
using namespace std;

void second_largest(int arr[], int n)
{
	int seclar,max = INT_MIN;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	//sorting
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-1; j++)
		{
			if(arr[j+1]<arr[j])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	//checking if all the elements in array is same
	int ans = n*arr[0],sum=0,total;
	for(int k=0; k<n; k++)
	{
		sum = sum + arr[k];
	}
	total = ans - sum;
	//second largest
	for(int i=0; i<n; i++)
	{
		int current = arr[i];
		if(current>max)
		{
			seclar = max;
			max = current;
		}
		else if(total==0)
		{
			seclar = INT_MIN;
		}
		else if(n<=1)
		{
			seclar = INT_MIN;
		}
	}
	
	cout<<seclar<<endl;
	/*
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}*/
}

int main()
{
	int n;
	cout<<"Enter number of test cases"<<endl;
	cin>>n;
	int arr[15];
	for(int i=0; i<n; i++)
	{
		int size;
		cout<<"Enter size of array"<<endl;
		cin>>size;
		second_largest(arr,size);
	}
}
