#include<iostream>
using namespace std;

int main()
{
	int n,i=1,l=1;
	cout<<"ENter n";
	cin>>n;
	while(i<=n)
	{
		int j=1,k=1;
		while(k<=n-i)
		{
			cout<<" ";
			k++;
		}
		while(j<=l)
		{
			cout<<"*";
			j++;
		}
		cout<<endl;
		l=l+2;
		i++;
	}
}
