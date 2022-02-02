#include<iostream>
using namespace std;

int main()
{
	int n,i=1,k=1;
	cout<<"Enter n"<<endl;
	cin>>n;
	while(i<=n)
	{
		int j = 1;
		while(j<=i)
		{
			cout<<" "<<k;
			k=k+1;
			j=j+1;
		}
		cout<<endl;
		i = i+1;
		k=i;
	}
}
