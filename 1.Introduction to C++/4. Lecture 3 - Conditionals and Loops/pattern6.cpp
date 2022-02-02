#include<iostream>
using namespace std;

int main()
{
	int n,i=1,l=1;
	cout<<"Enter number of rows"<<endl;
	cin>>n;
	while(i<=n)
	{
		int j=1;
		while(j<=n-i)
		{
			cout<<" ";
			j=j+1;
		}
		int k=1;
		while(k<=l)
		{
			cout<<"*";
			k=k+1;
		}
		cout<<endl;
		l=l+2;
		i=i+1;
	}
}
