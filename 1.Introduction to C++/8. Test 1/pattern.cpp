#include<iostream>
using namespace std;

int main()
{
	int n,i=1;
	cout<<"Enter n"<<endl;
	cin>>n;
	while(i<=n)
	{
		int k=1,j = i;
		while(k<=n-i)
		{
			cout<<" ";
			k++;
		}
		while(j>1)
		{
			cout<<j;
			j--;
		}
		while(j<=i)
		{
			cout<<j;
			j++;
		}
		cout<<endl;
		i++;
	}
}
