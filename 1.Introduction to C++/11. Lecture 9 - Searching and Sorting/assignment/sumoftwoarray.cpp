#include<iostream>
using namespace std;

void sumofarray(int arra[], int arrb[])
{
	int n,m,temp=0,sum = 0;
	int arrc[10],size;
	cout<<"Enter size of first array"<<endl;
	cin>>n;
	cout<<"Enter elements of first array"<<endl;
	for(int i=0; i<n; i++)
	{
		cin>>arra[i];
	}
	cout<<"Enter size of second array"<<endl;
	cin>>m;
	cout<<"Enter elements of second array"<<endl;
	for(int i=0; i<m; i++)
	{
		cin>>arrb[i];
	}
	//sum of two arrays
	if(n>=m)
	{
		size = n;
	}
	else 
	{
		size = m;
	}
	int i = n-1,j=m-1,k=size-1;
	for(; i>0 || j>0 || k>0; i--,j--,k--)
	{
		sum = arra[i] + arrb[j] + temp;
		if(sum>=10)
		{
			int t = sum%10;
			arrc[k] = t;
			temp = sum/10;
		}
		else
		{
			temp = 0;
			arrc[k] = sum;
		}
	}
	if(i>=0 && j>=0)
	{
		sum = arra[0] + arrb[0] + temp;
	}
	else if(i>=0 && j<0)
	{
		sum = arra[0] + temp;
	}
	else
	{
		sum = arrb[0] +temp;
	}
	if(sum>=10)
	{
		size = size + 1;
		for(int i = size-1; i>1; i--)
		{
			arrc[i] = arrc[i-1];
		}
		int t = sum%10;
		arrc[1] = t;
		arrc[0] = sum/10;
	}
	else
	{
		arrc[0] = sum;
	}
	for(int i=0; i<size; i++)
	{
		cout<<arrc[i]<<" ";
	}
}

int main()
{
	int n;
	cout<<"Enter number of queries"<<endl;
	cin>>n;
	int arra[15], arrb[15];
	for(int i=0; i<n; i++)
	{
		sumofarray(arra,arrb);
	}
	cout<<endl;
}
