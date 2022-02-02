#include<iostream>
using namespace std;

int main()
{
	int n,i=1;
	cout<<"Enter n"<<endl;
	cin>>n;
	while(i<=n)
	{
		int j=1,k=1;
		while(j<=n-i+1)
		{
			cout<<j;
			j++;
		}
		while(k<=(2*i-2))
		{
			cout<<"*";
			k++;
		}
		while(j>1)
		{
			j--;
			cout<<j;
		}
		cout<<endl;
		i++;
	}
}
