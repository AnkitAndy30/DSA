#include<iostream>
using namespace std;

void intersection(int arra[], int arrb[])
{
	int n,m;
	cout<<endl;
	cout<<"Enter the size of first array"<<endl;
	cin>>n;
	cout<<"Enter the elements of first array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arra[i];
	}
	cout<<"Enter the size of the second array"<<endl;
	cin>>m;
	cout<<"Enter the elements of the second array"<<endl;
	for(int i=0; i<m; i++)
	{
		cin>>arrb[i];
	}
	cout<<endl;
	for(int j=0; j<n; j++)
	{
		for(int k=0; k<m; k++)
		{
			if(arra[j]==arrb[k])
			{
				arrb[k] = arra[j] - arrb[k];
				cout<<arra[j]<<" ";
				break;
			}
		}
	}
}

int main()
{
	int n;
	cout<<"Enter the number of queries"<<endl;
	cin>>n;
	int arra[25], arrb[25];
	for(int i=0; i<n; i++)
	{
		intersection(arra,arrb);
	}
}
