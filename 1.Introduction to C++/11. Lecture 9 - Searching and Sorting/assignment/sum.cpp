#include<iostream>
using namespace std;

void sumofarray(int arra[], int arrb[])
{
	int n,m,vara=0,varb=0,sum,count=1,temp;
	int arrc[10];
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
	for(int i=n-1; i>=0; i--)
	{
		int j = n-1,mul=arra[i];
		while(j>i)
		{
			mul = mul*10;
			j--;
		}
		vara = vara + mul;
	}
	//cout<<vara;
	for(int i=m-1; i>=0; i--)
	{
		int j=m-1,mul=arrb[i];
		while(j>i)
		{
			mul= mul*10;
			j--;
		}
		varb = varb + mul;
	}
	//cout<<varb;
	sum = vara+varb;
	temp = sum;
	while((temp/10)!=0)
	{
		//cout<<temp;
		count++;
		temp = temp/10;
	}
	//cout<<count;
	for(int k=count-1; k>=0; k--)
	{
		arrc[k] = sum%10;
		sum = sum/10;
	}
	for(int i=0; i<count; i++)
	{
		cout<<arrc[i]<<" ";
	}
}

int main()
{
	int n;
	cout<<"Enter number pf queries"<<endl;
	cin>>n;
	int arra[15], arrb[15];
	for(int i=0; i<n; i++)
	{
		sumofarray(arra,arrb);
	}
	cout<<endl;
}
