#include<iostream>
using namespace std;

int main()
{
	int n,i=1,k=1;
	cout<<"ENter n";
	cin>>n;
	while(i<=n)
	{
		int j=1,l=1;
		while(l<=n-i)
		{
			cout<<" ";
			l++;
		}
		if(i==1)
		{
			while(j<=i)
			{
				cout<<k;
				j++;
			}
		}
		else
		{
			while(j<=i)
			{
				cout<<k;
				k++;
				j++;
			}
			k=k-1;
			int m=1;
			while(m<=i-1)
			{
				k--;
				cout<<k;
				m++;
			}
		}
		cout<<endl;
		k++;
		i++;
	}
}
