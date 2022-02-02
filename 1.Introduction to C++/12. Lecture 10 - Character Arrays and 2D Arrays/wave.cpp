#include<iostream>
using namespace std;

void wave(int array[][8],int m,int n)
{
	cout<<"Enter elements of array"<<endl;
	for(int a = 0; a<m; a++)
	{
		for(int b=0; b<n; b++)
		{
			cin>>array[a][b];
		}
	}
	int j=0;
	for(int i=0; i<n; i++)
	{
		//cout<<j;
		if(j == m)
		{
			j--;
			for(; j>=0; j--)
			{
				cout<<array[j][i]<<" ";
			}
			j++;
		}
		else
		{
			for(; j<m; j++)
			{
				cout<<array[j][i]<<" ";
			}
		}
	}
	cout<<endl;
}

int main()
{
	int array[8][8];
	int q;
	cout<<"Enter number of queries"<<endl;
	cin>>q;
	for(int i=0; i<q; i++)
	{
		cout<<"Enter size od 2d array"<<endl;
		int m,n;
		cin>>m>>n;
		wave(array,m,n);
	}
}
