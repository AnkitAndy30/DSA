#include<iostream>
using namespace std;

int main()
{
	int n,i=1;
	cout<<"ENter n";
	cin>>n;
	while(i<=n)
	{
		int j=1, k = n-i+1;
		while(j<=k)
		{
			cout<<k;
			j++;
		}
		cout<<endl;
		i++;
	}
}
