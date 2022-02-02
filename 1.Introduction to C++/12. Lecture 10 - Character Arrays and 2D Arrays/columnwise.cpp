#include<iostream>
using namespace std;

int main()
{
	int a[15][15];
	int m,n,sum = 0;;
	cout<<"Enter size of 2D array"<<endl;
	cin>>m;
	cin>>n;
	
	
	//taking input
	cout<<"Enter elements of array"<<endl;
	for(int i=0; i<m; i++)
	{
		for(int j=0; j<n; j++)
		{
			cin>>a[i][j];
			//cout<<" ";
		}
		//cout<<endl;
	}
	
	//sum 
	for(int i = 0; i<n; i++)
	{
		sum = 0;
		for(int j=0; j<m; j++)
		{
			sum = sum + a[j][i];
		}
		cout<<sum<<" ";
	}
}
