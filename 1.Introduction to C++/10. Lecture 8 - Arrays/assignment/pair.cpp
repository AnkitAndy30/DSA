#include<iostream>
using namespace std;

void countpair(int arr[])
{
	int n,m,ans,count=0;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number you want the pair of"<<endl;
	cin>>m;
	for(int j=0; j<n; j++)
	{
		for(int k = j+1; k<n; k++)
		{
			ans = arr[j] + arr[k];
			if(ans==m)
			{
				count++;
			}
		}
	}
	cout<<"Number of pairs ="<<count<<endl;
}

int main()
{
	int n;
	cout<<"Enter the number of queries"<<endl;
	cin>>n;
	int arr[20];
	for(int i=0; i<n; i++)
	{
		countpair(arr);
	}
}
