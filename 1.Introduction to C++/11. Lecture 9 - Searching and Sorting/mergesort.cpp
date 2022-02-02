#include<iostream>
using namespace std;

void mergesort(int arra[], int arrb[])
{
	int n,m,soc;
	cout<<"Enter size of first array"<<endl;
	cin>>n;
	cout<<"Enter elements of first array"<<endl;
	for(int p=0; p<n; p++)
	{
		cin>>arra[p];
	}
	cout<<"Enter size of second array"<<endl;
	cin>>m;
	cout<<"Enter elements of second array"<<endl;
	for(int q=0; q<m; q++)
	{
		cin>>arrb[q];
	}
	soc = n+m;
	int arrc[50],k=0;
	int i=0,j=0;
	for(;k<soc;)
	{
		if(i<n && j<m)
		{
		if(arra[i]<arrb[j])
		{
			arrc[k] = arra[i];
			i++;
			k++;
		}
		else
		{
			arrc[k]=arrb[j];
			j++;
			k++;
		}
		}
		else if(j<m)
		{
			arrc[k++] = arrb[j++];
		}
		else if(i<n)
		{
			arrc[k++]= arra[i++];
		}
	}
	for(int l=0; l<soc; l++)
	{
		cout<<arrc[l]<<" ";
	}
}

int main()
{
	int n;
	cout<<"Enter number of test cases"<<endl;
	cin>>n;
	int arra[15],arrb[15];
	for(int i=0; i<n; i++)
	{
		mergesort(arra,arrb);
	}
}
