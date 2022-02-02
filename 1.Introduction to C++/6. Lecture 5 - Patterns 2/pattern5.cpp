#include<iostream>
using namespace std;

int main()
{
	int n,i=1,l,m=1,r;
	cout<<"Enter n";
	cin>>n;
	r=n;
	l=n/2;
	if(n%2==1)
	{
			while(i<=n)
	{
		int j=1,k=1;
		while(j<=(l-i+1))
		{
			cout<<" ";
			j++;
		}
		if(i<=(l+1))
		{
			while(k<=m)
			{
				cout<<"*";
				k++;
			}
			m=m+2;
		}
		else
		{
			int p=1,q=1;
			while(p<=i-l-1)
			{
				cout<<" ";
				p++;
			}
			r=r-2;
			while(q<=r)
			{
				cout<<"*";
				q++;
			}
		}
		cout<<endl;
		i++;
	}
	}
}
